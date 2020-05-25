#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define MOD 1000000007
#define nl "\n"
#define FOR(i, a, b) for(int i=a; i<(b); i++)
#define all(c) c.begin(),c.end()
#define mem(a,val) memset(a,val,sizeof(a))
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)

using namespace std;

typedef long long int ll;

int main() {
	fast
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	vector<int> pref(n+1), suff(n+1);
	for(int i=1; i<=n; i++)
		pref[i] = __gcd(pref[i-1], a[i-1]);
	for(int i=n-1; i>=0; i--)
		suff[i] = __gcd(suff[i+1], a[i]);
	ll ans = 1;
	for(int i=0; i<n; i++){
		int tmp = __gcd(pref[i], suff[i+1]);
		ans = ans/__gcd(ans, (ll)tmp) * tmp;
	}
	cout << ans;
	return 0;
}
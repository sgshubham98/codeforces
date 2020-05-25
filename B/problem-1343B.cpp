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
	test{
		ll n; cin >> n;
		if(n/2 & 1){
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		n = n/2;
		vector<ll> res;
		ll sum = 0;
		for(int i=1; i<=n; i++) {
			res.pb(2*i);
			sum += (2*i);
		}
		ll tmp = -1;
		for(int i=1; i<n; i++) {
			tmp += 2;
			res.pb(tmp);
			sum -= tmp;
		}
		res.pb(sum);
		for(auto i: res)
			cout << i << " ";
		cout << nl;
	}
	return 0;
}
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
		int n, a, b;
		cin >> n >> a >> b;
		string ans = "";
		FOR(i, 0, n)
			ans += char('a'+i%b);
		cout << ans << nl;
	}
	return 0;
}
/*
* @author: sgshubham98
* @created:   2020-05-14 21:04:23
* @last Modified: 2020-05-14 21:10:08
*/
#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define MOD 1000000007
#define nl "\n"
#define mem(a,val) memset(a,val,sizeof(a))
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)

using namespace std;

typedef long long int ll;

int main() {
	fast
	test {
		ll n; cin >> n;
		ll i = n/2;
		ll ans = 0;
		while(n > 1)
			ans += 4 * (n-1) * i, i--, n-=2;
		cout << ans << nl;
	}
	return 0;
}
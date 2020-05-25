/*
* @author: sgshubham98
* @created:   2020-05-17 14:54:00
* @last Modified: 2020-05-17 15:18:03
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
	test{
		ll a, b, c, d; cin >> a >> b >> c >> d;
		// cout << a << b << c << d << nl;
		ll tmp = c-d;
		ll le = a - b;
		if(le <= 0) {
			cout << b << nl;
		}
		else if(tmp <= 0) {
			cout << -1 << nl;
		}
		else {
			ll ans = 0;
			if(le%tmp != 0) {
				ans = b + (le/tmp + 1) * c;
			} else {
				ans = b + (le/tmp) * c;
			}
			cout << ans << nl;
		}
	}
	return 0;
}
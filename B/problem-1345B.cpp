/*
* @author: sgshubham98
* @created:   2020-05-14 15:58:04
* @last Modified: 2020-05-14 16:29:40
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
		ll n; cin >> n;
		int i, cnt = 0;
		while(n > 1) {
			i = 1;
			while(true) {
				ll cards = (3*i*i + i) / 2;
				if(cards > n)
					break;
				i++;
			}
			i--;
			ll tmp = (3*i*i + i) / 2;
			n -= tmp;
			cnt++;
		}
		cout << cnt << nl;
	}
	return 0;
}
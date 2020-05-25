/*
* @author: sgshubham98
* @created:   2020-05-16 18:31:02
* @last Modified: 2020-05-16 19:32:00
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
		int n; cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		int cnt =0, ans = 0;
		for(int i=0; i<n; i++){
			cnt++;
			if(cnt >= v[i]) {
				cnt = 0;
				ans++;
			}
		}
		cout << ans << nl;
	}
	return 0;
}
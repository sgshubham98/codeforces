/*
* @author: sgshubham98
* @created:   2020-05-12 18:14:41
* @last Modified: 2020-05-14 14:53:55
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
		int n; cin >> n;
		vi a(n+1);
		for (int i=1; i<=n; i++)
			cin >> a[i];
		vi cnt(n+1, 1);
		for(int i=1; i<=n; i++){
			for(int j=i*2; j<=n; j+=i) {
				if(a[i] < a[j])
					cnt[j] = max(cnt[j], cnt[i]+1);
			}
		}
		int ans = 0;
		for(auto i: cnt)
			ans = max(ans, i);
		cout << ans << nl;
	}
	return 0;
}
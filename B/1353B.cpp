/*
* @author: sgshubham98
* @created:   2020-05-14 20:11:26
* @last Modified: 2020-05-14 20:23:04
*/
#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define MOD 1000000007
#define nl "\n"
#define all(x) x.begin(), x.end()
#define mem(a,val) memset(a,val,sizeof(a))
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)

using namespace std;

typedef long long int ll;

int main() {
	fast
	test{
		int n, k; cin >> n >> k;
		vi a(n), b(n);
		int sum_a = 0;
		for(int i=0; i<n; i++) {
			cin >> a[i];
			sum_a += a[i];
		}
		for(int i=0; i<n; i++)
			cin >> b[i];
		sort(all(a));
		sort(all(b));
		for(int i=0; i<n; i++){
			for(int j=n-1; j>=0; j--){
				if(a[i] < b[j] && k!=0) {
					sum_a += (b[j] - a[i]);
					int tmp = b[j];
					b[j] = a[i];
					a[i] = tmp;
					k--;
					break;
				}
			}
			if(k==0)
					break;
		}
		cout << sum_a << nl;
	}
	return 0;
}
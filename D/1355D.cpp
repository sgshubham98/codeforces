/*
* @author: sgshubham98
* @created:   2020-05-16 18:05:55
* @last Modified: 2020-05-16 18:24:45
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
		int n, s; cin >> n >> s;
		if(s/2 < n) {
			cout << "NO\n";
			return 0;
		}
		cout << "YES\n";
		ll tmp = s/n;
	   for(int i=0; i<n-1; i++)
	   	cout << tmp << " ";
	   cout << s-(n-1)*tmp << nl;
		cout << 1 << nl;
	return 0;
}
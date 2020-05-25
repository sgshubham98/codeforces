/*
* @author: sgshubham98
* @created:   2020-05-14 20:07:54
* @last Modified: 2020-05-14 20:30:40
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
		ll n, m; cin >> n >> m;
		if(n==1)
			cout << 0 << nl;
		else if(n==2)
			cout << m << nl;
		else
			cout << 2*m << nl;
	}
	return 0;
}
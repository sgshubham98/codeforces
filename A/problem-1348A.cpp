/*
* @author: sgshubham98
* @created:   2020-05-14 16:41:07
* @last Modified: 2020-05-14 16:57:20
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
		ll one=pow(2,n), two=0;
		for(int i=1; i<n/2; i++)
			one += pow(2,i);
		for(int i=n/2; i<n; i++)
			two += pow(2,i);
		cout << abs(one-two) << nl;
	}
	return 0;
}
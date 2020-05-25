/*
* @author: sgshubham98
* @created:   2020-05-16 16:42:41
* @last Modified: 2020-05-16 17:36:37
*/
#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define MOD 1000000007
#define pl pair<long long int, long long int>
#define nl "\n"
#define mem(a,val) memset(a,val,sizeof(a))
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)

using namespace std;

typedef long long int ll;

int main() {
	fast
	test{
		ll n, k;	cin >> n >> k;
   	while(k>1){
	   	pl tmp;
	      ll mn = 9,mx=0;
	      ll n1 = n;
	   	while(n1>0){
		      mn = min(mn,n1%10);
		      mx = max(mx,n1%10);
		      n1/=10;
   		}
		   tmp = make_pair(mn,mx);
		   if(tmp.first == 0)
		      break;
		   n += tmp.first * tmp.second;
		   k--;
	   }
	   cout << n << nl;
	}
	return 0;
}
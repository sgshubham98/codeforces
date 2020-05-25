#include <bits/stdc++.h>
#define nl "\n"
#define vi vector<int>
#define vl vector<ll>
#define vvi vector <vi>
#define pb push_back
#define pi pair<int,int>
#define pl pair<long long, long long>
#define MOD 1000000007
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define F first
#define S second
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main(){
	fast
	int n; cin >> n;
	vl v(n);
	for(int i=0; i<n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	int q; cin >> q;
	ll m;
	while(q--){
		cin >> m;
		if(m < v[0])
			cout << 0;
		else if(m >= v[n-1])
			cout << n;
		else{
			auto ans = upper_bound(v.begin(), v.end(), m);
			cout << ans-v.begin();
		}
		cout << nl; 
	}
	return 0;
}
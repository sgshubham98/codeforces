/*
* @author: sgshubham98
* @created:   2020-05-15 20:56:22
* @last Modified: 2020-05-15 21:01:15
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
		vector<ll> pos, neg;
		ll tmp;
		for(int i=0; i<n; i++){
			cin >> tmp;
			if(tmp<0) {
				neg.pb(tmp);
				continue;
			}
			pos.pb(tmp);
		}
		sort(pos.begin(), pos.end());
		if(neg.size()>0)
			sort(neg.begin(), neg.end());
		for(auto i: pos)
			cout << i << " ";
		for(int i=neg.size()-1; i>=0; i--)
			cout << neg[i] << " ";
		cout << nl;
	}
	return 0;
}
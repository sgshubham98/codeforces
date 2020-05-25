/*
* @Author: Goswami
* @Date:   2020-05-13 18:47:38
* @Last Modified by:   Goswami
* @Last Modified time: 2020-05-14 13:14:55
*/
#include <bits/stdc++.h>
#define vl vector<long long int>
#define pb push_back
#define MOD 1000000007
#define nl "\n"
#define FOR(i, a, b) for(int i=a; i<(b); i++)
#define all(c) c.begin(),c.end()
#define mem(a,val) memset(a,val,sizeof(a))
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)

using namespace std;

typedef long long int ll;

int main() {
	fast
	test{
		int n; cin >> n;
		vl v(n);
		for(int i=0; i<n; i++)
			cin >> v[i];
		vector<vl> vv;
		vl neg, pos;
		for(int i=0; i<n; i++){
			if(v[i] < 0) {
				if(pos.size()!=0) {
					vv.pb(pos);
					pos.clear();
				}
				neg.pb(v[i]);
			} else {
				if(neg.size()!=0){
					vv.pb(neg);
					neg.clear();
				}
				pos.pb(v[i]);
			}
		}
		if(neg.size() != 0)
			vv.pb(neg);
		if(pos.size() != 0)
			vv.pb(pos);
		ll res = 0;
		for(int i=0; i<vv.size(); i++){
			auto tmp = *max_element(vv[i].begin(), vv[i].end());
			res += tmp;
		}
		cout << res << nl;
	}
	return 0;
}
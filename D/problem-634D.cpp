#include <bits/stdc++.h>
#define vi vector<int>
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
		vector<string> v;
		string tmp;
		FOR(i, 0, 9){
			cin >> tmp;
			v.pb(tmp);
		}
		FOR(i,0,9){
			FOR(j,0,9)
				v[i][j]=='2' ? v[i][j]='3' : v[i][j]=v[i][j];
		}
		FOR(i,0,9)
			cout << v[i] << nl;
	}
	return 0;
}
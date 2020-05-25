#include <bits/stdc++.h>
#define vi vector<int>
#define vll vector<long long int>
#define vvi vector<vi>
#define pii pair<int,int>
#define pb push_back
#define F first
#define S second
#define MOD 1000000007
#define nl "\n"
#define FOR(i,n) for(int i=0; i<(n); i++)
#define FORA(i, a, n) for(int i=a; i<=(n); i++)
#define all(c) c.begin(),c.end()
#define mem(a,val) memset(a,val,sizeof(a))
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)

using namespace std;

typedef long long int lli;

map<int, int> m;
vector<pii> v;
long long f[100005];

int main() {
	fast
	int n; cin >> n;
	int tmp;
	FOR(i, n){
		cin >> tmp;
		m[tmp] += 1;
	}
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
        v.pb(make_pair(it->F, it->S));
	FOR(i, v.size()){
		int pr = i-1;
		while(pr>=0 && v[pr].F+1 == v[i].F)	pr--;
		if(pr==-1)
			f[i] = 1LL*v[i].F*v[i].S;
		else
			f[i] = 1LL*v[i].F*v[i].S + f[pr];
		if(i!=0)
			f[i] = max(f[i], f[i-1]);
	}
	cout << f[v.size()-1] << nl;
	return 0;
}
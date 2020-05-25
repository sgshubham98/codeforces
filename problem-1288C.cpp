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

ll fact[2001];

void precompute(){
	fact[0] = 1;
	for(int i=1; i<1021; i++)
		fact[i] = (i*fact[i-1])%MOD;
}

int main(){
	fast
	precompute();
	int n, m; cin >> n >> m;
	cout << fact[fact[n+2*m-1];
	cout << ((fact[n+2*m-1]%MOD)/((fact[n-1]%MOD * fact[2*m]%MOD)))%MOD << nl;
	return 0;
}
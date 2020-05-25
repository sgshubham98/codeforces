#include <bits/stdc++.h>
#define vi vector<int>
#define vll vector<long long int>
#define vvi vector<vi>
#define pii pair<int,int>
#define pb push_back
#define f first
#define s second
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

int main() {
	fast
	lli n; cin >> n;
	int cnt = 0;
	while(n-100>=0)
		cnt++, n-=100;
	while(n-20>=0)
		cnt++, n-=20;
	while(n-10>=0)
		cnt++, n-=10;
	while(n-5>=0)
		cnt++, n-=5;
	while(n-1>=0)
		cnt++, n-=1;
	cout << cnt;
	return 0;
}
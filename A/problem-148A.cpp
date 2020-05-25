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
	int k, l, m, n, d; cin >> k >> l >> m >> n >> d;
	set<int> harmed;
	for(int i=k; i<=d; i+=k)
		harmed.insert(i);
	for(int i=l; i<=d; i+=l)
		harmed.insert(i);
	for(int i=m; i<=d; i+=m)
		harmed.insert(i);
	for(int i=n; i<=d; i+=n)
		harmed.insert(i);
	cout << harmed.size();
	return 0;
}

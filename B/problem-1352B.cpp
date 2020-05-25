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
		int n, k; cin >> n >> k;
		int tmp = n - k + 1;
		if(tmp>0 && tmp&1){
			cout << "YES\n";
			FOR(i,0,k-1)	cout << "1 ";
			cout << tmp << nl;
			continue;
		}
		tmp = n - 2*k + 2;
		if(tmp>0 && !(tmp&1)){
			cout << "YES\n";
			FOR(i,0,k-1)	cout << "2 ";
			cout << tmp << nl;
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
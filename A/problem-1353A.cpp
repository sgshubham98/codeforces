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
		ll n, k; cin >> n >> k;
		int d=n;
		for(int i=2; i*i<=n; i++){
			if(n%i == 0){
				d = i;
				break;
			}
		}
		n += d;
		k -= 1;
		ll tmp;
		if(k>0)
			for(int i=2; i*i<=n; i++){
				if(n%i == 0){
					tmp = i;
					break;
				}
			}
		cout << n + k*tmp << nl;
	}
	return 0;
}
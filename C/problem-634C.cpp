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
		int n; cin >> n;
		vi cnt(n+1);
		fill(all(cnt),0);
		int tmp;
		FOR(i, 0, n){
			cin >> tmp;
			cnt[tmp] += 1;
		}
		auto mx = max_element(all(cnt));
		int d = n+1-count(all(cnt),0);
		cout << max(min(*mx-1, d), min(*mx, d-1)) << nl;
	}
	return 0;
}
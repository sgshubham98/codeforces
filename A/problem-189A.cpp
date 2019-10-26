#include <bits/stdc++.h>
#define nl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)
using namespace std;

typedef long long int ll;

int main() {
	fast
	ll n; cin >> n;
	ll a, b, c; cin >> a >> b >> c;
	ll dp[n+1];
	fill(dp, dp+n+1, -1e10); dp[0]=0;
	for (int i=a; i<=n; i++) dp[i]=max(dp[i], dp[i-a]+1);
	for (int i=b; i<=n; i++) dp[i]=max(dp[i], dp[i-b]+1);
	for (int i=c; i<=n; i++) dp[i]=max(dp[i], dp[i-c]+1);
	cout << dp[n];
}
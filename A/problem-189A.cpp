#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long int>
#define pb push_back
#define MOD 1000000007
#define nl "\n"
#define print cout 
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)
using namespace std;

typedef long long int ll;

int main() {
	fast
	int n; cin >> n;
	int a[3]; cin >> a[0] >> a[1] >> a[2];
	sort(a,a+3);
	int cnt = 0;
	while(n>=0){
		if(n-a[0]>=0){
			cnt += 1;
			n = n-a[0];
		}
		if(n-a[1]>=0){
			cnt += 1;
			n = n-a[1];
		}
		if(n-a[2]>=0){
			cnt += 1;
			n = n-a[2];
		}
	}
	cout << cnt << nl;
	return 0;
}

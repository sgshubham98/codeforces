#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long int>
#define pb push_back
#define MOD 1000000007
#define nl "\n"
#define print cout << 
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)
using namespace std;

typedef long long int ll;

int main() {
	fast
	int n; cin >> n;
	int x; cin >> x;
	int l,r;
	int t=0,tmp=0;
	for(int i=0;i<n;i++){
		cin >> l >> r;
		t = t + (l-1-tmp)%x;
    	t = t + r-(l-1);
    	tmp = r;
	}
	cout << t << nl;
	return 0;
}

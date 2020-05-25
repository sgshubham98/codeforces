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
	long n; cin >> n;
	long k; cin >> k;
	string s;
	long tmp4=0,tmp7=0;
	long cnt = 0;
	for(int i=0;i<n;i++){
		cin >> s;
		tmp4 = count(s.begin(),s.end(),'4');
		tmp7 = count(s.begin(),s.end(),'7');
		if(k >= tmp4+tmp7)
			cnt += 1;
	}
	cout << cnt << nl;
	return 0;
}

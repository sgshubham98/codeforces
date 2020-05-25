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

int main(){
	fast
	int n; cin >> n;
	int s[5] = {0};
	int tmp;
	for(int i=0;i<n;i++){
		cin >> tmp;
		s[tmp] += 1;
	}
	int ans = s[4] + s[3] + s[2]/2;
	s[1] -= s[3];
	if(s[2]%2)
		s[1] -= 2, ans++;
	if(s[1]>0)
		ans += (s[1]+3)/4;
	cout << ans;

	return 0;
}
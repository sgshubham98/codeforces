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
	string room = "0000000000";
	string s; cin >> s;
	for(int i=0; i<n; i++){
		if(s[i]=='L'){
			for(int j=0; j<10; j++){
				if(room[j] == '0'){
					room[j] = '1';
					break;
				}
			}
		}
		else if(s[i]=='R'){
			for(int j=9; j>=0; j--){
				if(room[j] == '0'){
					room[j] = '1';
					break;
				}
			}
		}
		else
			room[s[i]-'0'] = '0';
	}
	cout << room;
	return 0;
}
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
	string s; cin >> s;
	bool f = true;
	for(int i=1; i<s.length();i++){
		if(s[i]<65 || s[i]>90)
			f = false;
	}
	if(!f)
		cout << s;
	else{
		for(int i=0; i<s.length();i++){
			if(s[i]>=97)
				s[i] = char(s[i]-32);
			else
				s[i] = char(s[i]+32);
		}
		cout << s;
	}
	return 0;
}
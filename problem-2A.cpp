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
	map<string, int> m;
	int mx=INT_MIN, score[n]; string name[n];	
	for(int i=0; i<n; i++){
		cin >> name[i] >> score[i];
		m[name[i]] += score[i];
	}
	for(auto it = m.begin(); it!=m.end(); it++)
		mx = max(mx, it->S);
	set<string> winner;
	for(auto it = m.begin(); it!=m.end(); it++){
		if(it->S == mx)
			winner.insert(it->F);
	}
	m.clear();
	for(int i=0; i<n; i++){
		m[name[i]] += score[i];
		if(winner.find(name[i]) != winner.end() && m[name[i]]>=mx)
			return cout << name[i],0;
	}
}
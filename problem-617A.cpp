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
	int fi=0, fo=0, th=0, tw=0, on=0;
	int n; cin >> n;
	fi = n/5;
	n -= (fi*5);
	fo = n/4;
	n -= (fo*4);
	th = n/3;
	n -= (th*3);
	tw = n/2;
	n -= (tw*2);
	on = n;
	n -= on;
	cout << fi+fo+th+tw+on;
	return 0;
}

#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	// cin.ignore(); must be there when using getline(cin, s)
	int n, m; cin >> n >> m;
	int a[n];
	int neg=0,pos=0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if(a[i]==-1)
			neg++;
		else
			pos++;
	}
	int l, r;
	while(m--){
		cin >> l >> r;
		int tmp = r-l+1;
		if(tmp%2)
			cout << 0;
		else{
			if(neg>=tmp/2&&pos>=tmp/2)
				cout << 1;
			else
				cout << 0;
		}
		cout << endl;
	}
	return 0;
}
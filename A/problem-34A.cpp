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
	int n; cin >> n;
	int a[n];
	for (int i=1; i<=n; i++)
		cin >> a[i];
	int max = INT_MAX;
	int ia, ib;
	for(int i=1;i<n;i++){
		if(abs(a[i]-a[i+1])<max){
			max = abs(a[i]-a[i+1]);
			ia = i;
			ib = i+1;
		}
	}
	if(abs(a[1]-a[n])<max){
		ia = n; 
		ib=1;
	}
	cout << ia << " " << ib;
	return 0;
}

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
	int r1, r2; cin >> r1 >> r2;
	int c1, c2; cin >> c1 >> c2;
	int d1, d2; cin >> d1 >> d2;
	int a11 = (c1+d1-r2)/2;
	int a12 = r1-a11;
	int a21 = d2-a12;
	int a22 = d1-a11;
	if(a11<10 && a12<10 && a21<10 && a22<10 && a11!=a12 && a11!=a21
		&& a11!=a22 && a12!=a21 && a12!=a22 && a21!=a22 && a11>0 && a12>0 && a21>0 && a22>0)
		cout << a11 << " " << a12 << endl << a21 << " " << a22;
	else
		cout << -1;
	return 0;
}

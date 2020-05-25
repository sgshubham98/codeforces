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
	string dg1; cin >> dg1;
	string dg2; cin >> dg2;
	int cnt=0;
	int l1 = dg1.length();
	int l2 = dg2.length();
	if(l1==l2){
		for(int i=0;i<l1;i++){
			if(dg1[i]!=dg2[i])
				cnt++;
		}
		sort(dg1.begin(),dg1.end());
		sort(dg2.begin(),dg2.end());
		if(dg1==dg2 && cnt<=2)
			cout << "YES";
		else
			cout << "NO";
	}
	else
		return cout << "NO",0;
	return 0;
}
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
	int N; cin >> N;
    int arr[N];
    for(int i=0;i<N;i++)
        cin>>arr[i];
    if(N<4){
        cout<<"no";
        return 0;
    }
    string S="no";
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1;j++){
            if(i==j)
            	continue;
            int A,B,C,D;
            A=min(arr[i],arr[i+1]);
            B=max(arr[i],arr[i+1]);
            C=min(arr[j],arr[j+1]);
            D=max(arr[j],arr[j+1]);
            if(A>C && A<D && B>D){
                S="yes";
                break;
            }
            else if(A<C && A>D && B<D){
                S="yes";
                break;
            }
        }
    }
    cout<<S;
	return 0;
}
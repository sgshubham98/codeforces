#include<bits/stdc++.h>
using namespace std;

int main(){
    long y,k,n; cin >> y >> k >> n;
    int st = k-(y%k);
    int cnt = 0;
    for(int i=st;i<=n-y;i+=k){
        cout << i << " ";
        cnt++;
    }
    if(cnt==0)
        cout << -1;
}
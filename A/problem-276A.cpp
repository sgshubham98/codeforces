#include<bits/stdc++.h>
using namespace std;

int main(){
    long n; cin >> n;
    long k; cin >> k;
    long arr[n][2];
    for(int i=0;i<n;i++)
        cin >> arr[i][0] >> arr[i][1];
    long ans = LONG_MIN;
    for(int i=0;i<n;i++){
        if(arr[i][1]>=k)
            ans = max(ans,arr[i][0]-arr[i][1]+k);
        else
            ans = max(ans,arr[i][0]);
    }
    cout << ans << endl;
}
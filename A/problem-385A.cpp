#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int c; cin >> c;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    int ans = INT_MIN;
    for(int i=0;i<n-1;i++){
        ans = max(ans, v[i]-v[i+1]-c);
    }
    if(ans<0)
        cout << 0 << endl;
    else
        cout << ans << endl;
}
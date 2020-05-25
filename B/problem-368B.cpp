#include<bits/stdc++.h>
using namespace std;

vector<bool> visited(100005);

int main(){
    int n, m; cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    int ans[n];
    ans[n-1] = 1;
    visited[a[n-1]] = true;
    for(int i=n-2; i>=0; i--){
        if(visited[a[i]] == true){
            ans[i] = ans[i+1];
            continue;
        }
        ans[i] = ans[i+1] + 1;
        visited[a[i]] = true;
    }
    while(m--){
        cin >> n;
        cout << ans[n-1] << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    int ans = INT_MAX;
    vector<int> tmp;
    for(int i=1;i<n-1;i++){
        tmp.clear();
        int res = 0;
        for(int j=0;j<n;j++)
            if(j != i)
                tmp.push_back(v[j]);

        for(int j=1;j<tmp.size();j++)
            res = max(res,tmp[j]-tmp[j-1]);
        
        ans = min(ans,res);
    }
    cout << ans;
}
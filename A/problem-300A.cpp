#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v1, v2, v3;
    int f1=0, f2 = 0;
    int tmp[n];
    int neg = 0;
    for(int i=0;i<n;i++){
        cin >> tmp[i];
        if(tmp[i]<0)
            neg += 1;
    }
    for(int i=0;i<n;i++){
        if(f1==0 && tmp[i]<0){
            v1.pb(tmp[i]);
            f1 += 1;
        }
        else if((f2<2 && tmp[i]<0 && neg>2)|| tmp[i] > 0){
            v2.pb(tmp[i]);
            if(tmp[i] < 0)
                f2 += 1;
        }
        else if(tmp[i]==0 || f1==1 || f2==2)
            v3.pb(tmp[i]);
    }
    cout << v1.size() << " ";
    for(auto x: v1)  cout << x << " ";
    cout << "\n";
    cout << v2.size() << " ";
    for(auto x: v2)  cout << x << " ";
    cout << "\n";
    cout << v3.size() << " ";
    for(auto x: v3)  cout << x << " ";
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin >> n >> k;
    int t,count=0;
    for(int i=0;i<n;i++){
        cin >> t;
        if(k+t<=5)
            count += 1;
    }
    cout << count/3;
    return 0;
}
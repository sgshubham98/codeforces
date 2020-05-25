#include<bits/stdc++.h>
using namespace std;

int main(){
    long n,v; cin >> n >> v;
    long k,s,t,count;
    count = 0;
    long arr[n+1]={0};
    for(int i=1;i<=n;i++){
        cin >> k;
        t = 0;
        for(int j=0;j<k;j++){
            cin >> s;
            if(v>s){
                t = 1; 
            }
            else if(t!=1 && v<=s){
                t = 0;
            }
        }
        arr[i] = t;
        count += t;
    }
    cout << count << endl;
    for(int i=1;i<=n;i++){
        // cout << arr[i] << " ";
        if(arr[i]==1)
            cout << i << " ";
    }
    return 0;
}
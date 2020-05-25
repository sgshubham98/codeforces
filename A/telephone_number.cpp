#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    int n,res;
    while(T--){
        cin >> n;
        char s[n+1];
        cin >> s;
        res = 0;
        for(int i=1;i<=n;i++){
            if(s[i]=='8'){
                res = n-i;
                break;
            }
        }
        if(res >=  11)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
}
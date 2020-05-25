#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){
    int k, d; cin >> k >> d;
    if(d==0){
        if(k==1)
            cout << 0;
        else
            cout << "No solution";
    }
    else{
        cout << d;
        for(int i=0;i<k-1;i++) cout << 0;
    }
}
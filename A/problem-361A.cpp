#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    int k; cin >> k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i)
                cout << k;
            else
                cout << 0;
            cout << " ";
        }
        cout << endl;
    }
} 
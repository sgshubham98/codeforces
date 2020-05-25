#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
        cin >> a[i] >> b[i];
    bool check = false;
    for(int i=0;i<n-1;i++){
        if(a[i]!=b[i]){
            check = true;
            break;
        }
    }
    if(check)
        cout << "Happy Alex\n";
    else
        cout << "Poor Alex\n";
}
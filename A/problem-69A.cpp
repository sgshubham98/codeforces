#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,c;
    cin >> n;
    int asum = 0, bsum = 0, csum = 0; 
    for(int i=0; i<n; i++){
        cin >> a >> b >> c;
        asum += a;
        bsum += b;
        csum += c;
    }
    if(asum == 0 && bsum == 0 && csum == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
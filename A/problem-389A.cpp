#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++)    cin >> a[i];
    int v=a[0];
    for(int i=1;i<n;i++)
        v = __gcd(v,a[i]);
    cout << v*n;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[1001];
    memset(a, 0, sizeof(a));
    int tmp;
    for(int i=0;i<n;i++){
        cin >> tmp;
        a[tmp]++;
    }
    sort(a,a+1001,greater<int>());
    int r = 0;
    for(int i=1;i<1001;i++)
        r += a[i];
    if(a[0]-1<=r)
        cout << "YES";
    else
        cout << "NO";
}
#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a,b;
    int su=0, sl=0;
    bool f = true;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if((a%2 && b%2==0)||(b%2 && a%2==0))
            f = false;
        su += a;
        sl += b;
    }
    if(su%2==0 && sl%2==0)
        cout << 0;
    else if((su%2 && sl%2==0) || (su%2==0 && sl%2) || f)
        cout << -1;
    else
        cout << 1;
}
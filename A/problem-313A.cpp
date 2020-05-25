#include<bits/stdc++.h>

using namespace std;

int main(){
    long n;
    cin >> n;
    if(n >= 0){
        cout << n;
    }
    else{
        long r1,r2;
        r1 = n/10;
        r2 = (n/100)*10+(n%10);
        cout << max(r1,r2);
    }
    return 0;
}
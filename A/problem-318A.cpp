#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, pos;
    cin >> n >> pos;
    if(pos <= (n+1)/2)
        cout << pos*2-1;
    else
        cout << (pos - (n+1)/2)*+2;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll a,b; cin >> a >> b;
    ll c;
    if(a%2!=0)
        a += 1;
    if(b-a<2)
        cout << -1;
    else{
        c = a + 1;
        b = a + 2;
        cout << a << " " << c << " " << b;
    }
}
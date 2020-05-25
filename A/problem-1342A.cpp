#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int t; cin >> t;
    while(t--){
        ll x, y; cin >> x >> y;
        ll a, b; cin >> a >> b;
        ll ans = 0;
        if(x > y)
            swap(x,y);
        ans += (y-x)*a;
        ans += min(x*a*2, x*b);
        cout << ans << endl;
    }
}
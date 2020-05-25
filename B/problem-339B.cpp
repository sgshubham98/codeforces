#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n; cin >> n;
    ll m; cin >> m;
    vector<ll> v(m);
    for(ll i=0;i<m;i++)
        cin >> v[i];
    ll count=v[0]-1;
    for(ll i=1;i<m;i++){
        if(v[i]<v[i-1])
            count += n-v[i-1]+v[i];
        else
            count += v[i]-v[i-1];
    }
    cout << count << " ";
}
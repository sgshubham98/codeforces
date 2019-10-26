#include<iostream>
using namespace std;

typedef long long int ll;

int main(){
    ll k; cin >> k;
    ll n; cin >> n;
    ll la=-1;
    bool f = false;
    while(1 && n){
        if(n%k && n!=1){
            f = true;
            break;
        }
        la++;
        n/=k;
    }
    if(f)
        cout << "NO\n";
    else
        cout << "YES\n" << la-1 << endl;
}
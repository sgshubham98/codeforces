#include<bits/stdc++.h>
using namespace std;

int main(){
    string a[] = {"O-|-OOOO", "O-|O-OOO", "O-|OO-OO", "O-|OOO-O", "O-|OOOO-", "-O|-OOOO",
    "-O|O-OOO", "-O|OO-OO", "-O|OOO-O", "-O|OOOO-"};
    long n; cin >> n;
    int rem;
    if(n==0)
        cout << a[n];
    else
        while(n){
            rem = n%10;
            cout << a[rem] << endl;
            n /= 10;
        }
}
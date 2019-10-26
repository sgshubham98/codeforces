#include<bits/stdc++.h>
using namespace std;

long removeZero(string n){
    long res = 0;
    for(int i=0;i<n.length();i++)
        if(n[i]!='0')
            res = res*10 + (n[i]-'0');
    return res;
}

int main(){
    long a,b; cin >> a >> b;
    long c = a+b;
    a = removeZero(to_string(a));
    b = removeZero(to_string(b));
    c = removeZero(to_string(c));
    // cout << a << " " << b << " " << c << "\n";
    if(c == a+b)
        cout << "YES";
    else
        cout << "NO";
}
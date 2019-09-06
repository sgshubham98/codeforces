#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int c0 = a+b+c;
    int c1 = a+b*c;
    int c2 = a*(b+c);
    int c3 = a*b*c;
    int c4 = (a+b)*c;
    cout << max(c0,max(max(c1,c2),max(c3,c4)));
    return 0;
}
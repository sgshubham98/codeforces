#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c,d;
    char ch1,ch2;
    cin >> ch1 >> ch2 >> a;
    cin >> ch1 >> ch2 >> b;
    cin >> ch1 >> ch2 >> c;
    cin >> ch1 >> ch2 >> d;
    int a1 = a.length(), b1 = b.length(), c1 = c.length(), d1 = d.length();
    char res = 'C'; int cnt = 0;
    if((2*a1<=b1&& 2*a1<=c1 && 2*a1<=d1) || (a1>=2*b1&& a1>=2*c1 && a1>=2*d1)){
        res = 'A';
        cnt++;
    }
    if((2*b1<=a1&& 2*b1<=c1 && 2*b1<=d1) || (b1>=2*a1&& b1>=2*c1 && b1>=2*d1)){
        res = 'B';
        cnt++;
    }
    if((2*c1<=b1&& 2*c1<=a1 && 2*c1<=d1) || (c1>=2*b1&& c1>=2*a1 && c1>=2*d1)){
        res = 'C';
        cnt++;
    }
    if((2*d1<=b1&& 2*d1<=c1 && 2*d1<=a1) || (d1>=2*b1&& d1>=2*c1 && d1>=2*a1)){
        res = 'D';
        cnt++;
    }
    if(cnt==1)
        cout << res;
    else
        cout << 'C';
}
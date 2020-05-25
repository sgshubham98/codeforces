#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s; cin >> s;
    ll mid;
    for(ll i=0;i<s.length();i++)
        if(s[i]=='^'){ mid = i; break; }
    ll sum = 0;
    for(ll i=0;i<s.length();i++){
        if(s[i]>=48&&s[i]<=57){
            sum += (i-mid)*(s[i]-'0');
        }
    }
    if(sum==0)
        cout << "balance";
    else if(sum<0)
        cout << "left";
    else
        cout << "right";
}
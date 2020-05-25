#include<iostream>
using namespace std;

int main(){
    int cnt0=0, cnt1=0;
    string s; cin >> s;
    bool f = true;
    char ch = s[0];
    if(ch=='1') cnt1 = 1;
    else cnt0 = 1;
    for(int i=1;i<s.length();i++){
        if(ch==s[i]){
            if(ch=='0')
               cnt0 += 1;
            else
               cnt1 += 1;
        }
        else{
            if(ch=='0' && s[i]=='1'){
                cnt0 = 0;
                cnt1 = 1;
                ch = '1';
            }
            else{
                cnt1 = 0;
                cnt0 = 1;
                ch = '0';
            }
        }
        if(cnt0>=7 || cnt1>=7){
            cout << "YES\n";
            f = false;
            break;
        }
    }
    if(f)
       cout << "NO\n";
}
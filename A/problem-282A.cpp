#include<iostream>
using namespace std;

int main(){
    int t; cin >> t;
    string s;
    int v=0;
    while(t--){
        cin >> s;
        if(s[1]=='-')
            v--;
        else
            v++;
    }
    cout << v;
}
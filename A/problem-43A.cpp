#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    pair<string, int> p1= make_pair("",0),p2 = make_pair("",0);
    string s;
    while(n--){
        cin >> s;
        if(p1.first == ""){
            p1.first = s;
            p1.second++;
        }
        else if(p1.first != s){
            p2.first = s;
            p2.second++;
        }
        else{
            p1.first = s;
            p1.second++;
        }
    }
    if(p1.second > p2.second)
        cout << p1.first << endl;
    else
        cout << p2.first << endl;
}
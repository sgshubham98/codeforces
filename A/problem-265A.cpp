#include<iostream>
using namespace std;

int main(){
    string s1, s2; cin >> s1 >> s2;
    int cnt = 1;
    int j = 0;
    for(int i=0;i<s2.length();i++){
        if(s1[j]==s2[i]){
            cnt += 1;
            j += 1;
        }
    }
    cout << cnt;
}
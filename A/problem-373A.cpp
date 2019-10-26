#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt[10]; memset(cnt, 0, sizeof(cnt));
    int k; cin >> k;
    string s;
    for(int i=0;i<4;i++){
        cin >> s;
        for(int j=0;j<4;j++){
            if(s[j]=='.') continue;
            else cnt[s[j]-'0']++;
        }
    }
    for(int i=1;i<10;i++)
        if(cnt[i]>2*k)
            return cout << "NO",0;
    cout << "YES";
    return 0;
}
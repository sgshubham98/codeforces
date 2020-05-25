#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ssize = s.size();
    int space = 0, wubCount = 0;
    for(int i = 0; i< ssize; i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i += 2;
            wubCount += 1;
            if(wubCount > 1)
                continue;
            if(space){
                cout << " ";
            }
        }
        else{
            wubCount = 0;
            space = 1;
            cout << s[i];
        }
    }
    return 0;
}
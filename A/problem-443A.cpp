#include<bits/stdc++.h>

using namespace std;

int main(){
    char ch;
    char c[1000];
    int i=0;
    while(true){
        cin >> ch;
        // cout << ch;
        if(ch == '}')
            break;
        else if(ch != '{' && ch != ',' && ch != ' ')
            c[i++] = ch;
    }
    unordered_set<char> temp(c,c+i);
    cout << temp.size();
    return 0;
}
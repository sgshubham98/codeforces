#include<bits/stdc++.h>
using namespace std;

int main(){
    long n; cin >> n;
    int cnt=0;
    string tmp;
    while(1){
        n += 1;
        cnt++;
        tmp = to_string(n);
        if(find(tmp.begin(),tmp.end(),'8')!= tmp.end())
            break;
    }
    cout << cnt;
}
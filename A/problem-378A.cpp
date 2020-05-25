#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b; cin >> a >> b;
    int a_wins=1, draw=0, b_wins=1;
    int diff = abs(a-b)-1;
    if(diff%2==0)
        draw = 0;
    else
        draw = 1;
        
    if(b>a){
        a_wins += a - 1 + diff/2;
        b_wins += 6 - b + diff/2;
    }
    else if(a==b){
        a_wins = 0;
        b_wins = 0;
        draw = 6;
    }
    else{
        b_wins += b - 1 + diff/2;
        a_wins += 6 - a + diff/2;
    }
    cout << a_wins << " " << draw << " " << b_wins;
}
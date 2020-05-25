#include<iostream>
using namespace std;

int main(){
    int t; cin >> t;
    int a, b, c;
    while(t--){
        cin >> a >> b >> c;
        int cnt = 0;
        while(c-2>=0 && b-1>=0){
            cnt += 3;
            c -= 2;
            b -= 1;
        }
        while(b-2>=0 && a-1>=0){
            cnt += 3;
            a -= 1;
            b -= 2;
        }
        cout << cnt << endl;
    }
}
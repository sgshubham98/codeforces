#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int c1=0;
    int tmp;
    for(int i=0;i<n;i++){
        cin >> tmp;
        c1 += tmp;
    }
    int c2=0;
    for(int i=0;i<n-1;i++){
        cin >> tmp;
        c2 += tmp;
    }
    int c3=0;
    for(int i=0;i<n-2;i++){
        cin >> tmp;
        c3 += tmp;
    }
    cout << c1-c2 << endl << c2-c3 << endl;
}
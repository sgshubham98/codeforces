//Integer Points
#include<iostream>
using namespace std;

typedef long long int ll;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n;
        ll tmp;
        ll e1=0, o1=0, e2=0, o2=0;
        for(int i=0;i<n;i++){
            cin >> tmp;
            if(tmp%2)
                o1 += 1;
            else
                e1 += 1;
        }
        cin >> m;
        for(int i=0;i<m;i++){
            cin >> tmp;
            if(tmp%2)
                o2 += 1;
            else
                e2 += 1;
        }
        cout << (o1*o2)+(e1*e2) << "\n";
    }
}
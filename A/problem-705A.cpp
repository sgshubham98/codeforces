#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=1;i<=n;i++){
    	if(i!=1)
    		cout << " that ";
    	else{}
        if(i%2)
            cout << "I hate";
        else
            cout << "I love";
    }
    cout << " it" << endl;
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    int s,n;
    cin >> s >> n;
    
    int d[n][2];
    for(int i=0;i<n;i++){
        cin >> d[i][0] >> d[i][1];
    }

    int change = 1,k=n,temp;
    while (change || k>1){
        change = 0;
        k = (k+1)/2;
        for (int i=0;i<(n-k);i++){
            if(d[i][0]>d[i+k][0]){
                temp = d[i][0];
                d[i][0] = d[i+k][0];
                d[i+k][0] = temp;
                temp = d[i][1];
                d[i][1] = d[i+k][1];
                d[i+k][1] = temp;
                change = 1;
            }
        }
    }

    int w=1;
    for(int i=0;i<n;i++){
        if(s>d[i][0]){
            s+=d[i][1];
            w = 1;
        }
        else{
            w=0;
            break;
        }
    }
    if(w==1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
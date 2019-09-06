#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string arr[n];
    cin >> arr[0];
    // cout << arr[0][0];
    int arrCount[n]={1};
    for(int i=1;i<n;i++){
        cin >> arr[i];
        for (int j=0;j<n;j++){
            if(arr[i][0]==arr[j][0]){
                arrCount[j] += 1;
            }
            else{
            }
            
        }
        
    }  
    return 0;
}
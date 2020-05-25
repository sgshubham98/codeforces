#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n], countOdd=0, countEven=0,indexO,indexE;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            indexE = i;
            countEven += 1;
        }
        else{
            countOdd += 1;
            indexO = i;
        }
    }
    if(countEven==1)    cout << indexE+1;
        else    cout << indexO+1;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    long arr[n],count=0;
    for (long i=0;i<n;i++) cin >> arr[i];
    for(long i=1;i<n;i++){
        if(abs(arr[i]-arr[i-1]) <= 
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    ll a=0, b=0;
    int i=0, j=n-1;
    while(i<=j){
        b += arr[j];
        if(i<j)
            a += arr[i]; 
        j--;
        i++;
    }
    // cout << a << " " << b << endl;
    cout << (a*a) + (b*b);
}
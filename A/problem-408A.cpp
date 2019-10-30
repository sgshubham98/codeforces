#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n]; for(int i=0;i<n;i++)  cin >> a[i];
    int time[n];
    int tmp;
    for(int i=0;i<n;i++){
        time[i] = a[i]*15;
        for(int j=0;j<a[i];j++){ cin >> tmp; time[i]+=tmp*5;}
    }
    sort(time,time+n);
    cout << time[0];
}
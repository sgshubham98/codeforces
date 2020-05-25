#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];
    
    char l_dia_char = arr[0][0], r_dia_char = arr[0][n-1];
    bool dia = false;
    for(int i=1,j=n-2;i<n,j>=0;i++,j--){
        if(arr[i][i] == l_dia_char && arr[i][n-1-i] == r_dia_char && l_dia_char == r_dia_char){
            dia = true;
        }
        else{
            dia = false;
            break;
        }
        
    }
    // cout << dia << " ";
    char other_char = arr[0][1];
    // cout << other_char << " ";
    bool other = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i||j==n-1-i)
                continue;
            else if(other_char != arr[i][j]){
                other = false;
                break;
            }
        }
    }
    // cout << other << " ";
    if(dia && other && l_dia_char != other_char)
        cout << "YES";
    else
        cout << "NO";
}
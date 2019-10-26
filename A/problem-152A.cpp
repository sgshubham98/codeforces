#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    char a[n][m];
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        for(int j=0;j<m;j++)
            a[i][j] = s[j];
    }
    string si[m], tmp;
    char maxi;
    char max[m];
    for(int i=0;i<m;i++){
        tmp = "";
        maxi = CHAR_MIN;
        for(int j=0;j<n;j++){
            tmp += a[j][i];
            if(a[j][i]>maxi)
                maxi = a[j][i];
        }
        max[i] = maxi;
        si[i] = tmp;
    }
    int visited[n];
    memset(visited, 0, sizeof(visited));
    for(int i=0;i<m;i++){
        tmp = si[i];
        for(int j=0;j<n;j++){
            if(max[i]==tmp[j])
                visited[j]=1;
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++)
        cnt += visited[i];

    cout << cnt;
}
#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long int>
#define pb push_back
#define MOD 1000000007
#define nl << "\n"
#define print cout << 
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)
using namespace std;

typedef long long int ll;

int main() {
	fast
	int n; cin >> n;
	char arr[n][n];
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        cin >> arr[i][j];
	    }
	}
// 	int(j-1>=0)+int(i+1<r)+int(j+1<c);
	int count = 0;
	bool res = true;
	for(int i=0;i<n;i++){
	    count = 0;
	    for(int j=0;j<n;j++){
	        if(arr[i][j]=='x'){
	            if(i-1>=0){
	                if(arr[i-1][j]=='o')
	                    count += 1;
	            }
	            if(j-1>=0){
	                if(arr[i][j-1]=='o')
	                    count += 1;
	            }
	            if(i+1<n){
	                if(arr[i+1][j]=='o')
	                    count += 1;
	            }
	            if(j+1<n){
	                if(arr[i][j+1]=='o')
	                    count += 1;
	            }
	        }
	        if(count%2){
	            res = false;
	            break;
	        }
	    }
	}
	return 0;
}

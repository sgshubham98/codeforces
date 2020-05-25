#include <bits/stdc++.h>
#define vi vector<int>
#define vl vector<long long int>
#define pb push_back
#define MOD 1000000007
#define nl "\n"
#define print cout 
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)
using namespace std;

typedef long long int ll;

int main() {
	fast
	int n; cin >> n;
	int arr[n][2];
	for(int i=0;i<n;i++)
		cin >> arr[i][0] >> arr[i][1];
	int cnt = 0;
	for(int i=0;i<n;i++){
		bool upper = false;
		bool lower = false;
		bool left = false;
		bool right = false;
		for(int j=0;i<n;j++){
			if(arr[i][0]==arr[j][0]){
				//upper
				if(arr[i][1]>arr[j][1])
					upper = true;
				//bottom
				else if (arr[i][1]<arr[j][1])
					lower = true;
			}
			else if(arr[i][1]==arr[j][1]){
				//right
				if(arr[i][0]>arr[j][0])
					upper = true;
				//left
				else if (arr[i][0]<arr[j][0])
					left = true;
			}
		}
		if(upper && lower && left && right)
			cnt += 1;
	}
	cout << cnt << nl;
	return 0;
}
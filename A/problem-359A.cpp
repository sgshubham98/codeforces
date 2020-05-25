#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int tmp;
	for(int i=1;i<=n;i++){
		for (int j=1; j<=m; j++){
			cin >> tmp;
			if((i==1||i==n||j==1||j==m)&&tmp)
				return cout << "2",0;
		}
	}
	cout << "4";
}
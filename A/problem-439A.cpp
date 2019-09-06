#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,d;
	cin >> n >> d;
	int sum=0,t;
	for (int i = 0; i < n; i++){
		cin >> t;
		sum += t;
	}
	sum += (n-1)*10;
	int temp = d-sum;
	if (temp%5==0){
		temp = temp%5;
		sum += (temp*5);
	}
	temp = temp + ((n-1)*10)%5;
	if (sum==d)
		cout << temp <<"\n";
	else
		cout << -1 << "\n";
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	int n, k; cin >> n >> k;
	int scores[n+1];
	for(int i=1;i<=n;i++){
		cin >> scores[i];
	}
	int tmp = scores[k];
	int cnt = 0;
	for(int i=1;i<=n;i++){
		if(scores[i]>=tmp && scores[i]>0)
			cnt += 1;
	}
	cout << cnt;
	return 0;
}
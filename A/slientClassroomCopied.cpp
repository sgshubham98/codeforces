#include<bits/stdc++.h>

using namespace std;

int main()
{
	long int N;
	
	cin >> N;
	
	string s;
	
	int x[26]={0};
	while (N--)
	{
		cin >> s;
		x[s[0]-'a']++;
	}
	
	long int res=0,ans;
	for( int i=0;i<26;i++)
	{
		ans=((((x[i]/2)*((x[i]/2)-1)))/2)+(((x[i]-(x[i]/2))*((x[i]-(x[i]/2))-1))/2);
		res=res+ans;
	}
	cout << res;
}
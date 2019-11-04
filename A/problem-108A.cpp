#include<bits/stdc++.h>
using namespace std;

int main(){
	string t; cin >> t;
	int hr = (t[0]-'0')*10+(t[1]-'0');
    int mn = (t[3]-'0')*10+(t[4]-'0');
	string s,rev;
	while(1){
        mn++;
        if(mn==60)
            mn=0, hr++;
        if(hr==24)
            hr=0;
        if(hr/10==mn%10 && mn/10==hr%10){
            printf("%02d:%02d",hr,mn);
            break;
        }
	}
	return 0;
}
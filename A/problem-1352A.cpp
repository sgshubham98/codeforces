#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define MOD 1000000007
#define nl "\n"
#define FOR(i, a, b) for(int i=a; i<(b); i++)
#define all(c) c.begin(),c.end()
#define mem(a,val) memset(a,val,sizeof(a))
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)

using namespace std;

typedef long long int ll;

int main() {
	fast
	test{
		string n; cin >> n;
		vector<string> v;
		for(int i=0; i<n.length(); i++){
			if(n[i]!='0')
				v.push_back(to_string(((n[i]-'0')*(pow(10, n.length()-i-1)))));
		}
		cout << v.size() << nl;
		for(int i=0; i<v.size(); i++)
			cout << stoi(v[i]) << " ";
		cout << nl;
	}
	return 0;
}
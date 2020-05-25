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
typedef unsigned long long int ull;

int main() {
	fast
	double a,b; cin >> a >> b;
	double c,d; cin >> c >> d;
	double misha = max(3*a/10, a-(a*c)/250);
	double vasya = max(3*b/10, b-(b*d)/250);
	if(misha > vasya)
		cout << "Misha";
	else if(misha < vasya)
		cout << "Vasya";
	else
		cout << "Tie";
	cout << nl;
	return 0;
}

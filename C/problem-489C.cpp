#include <bits/stdc++.h>
#define vi vector<int>
#define vll vector<long long int>
#define vvi vector<vi>
#define pii pair<int,int>
#define pb push_back
#define f first
#define s second
#define MOD 1000000007
#define nl "\n"
#define all(c) c.begin(),c.end()
#define mem(a,val) memset(a,val,sizeof(a))
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int T; cin >> T; while(T--)

using namespace std;

typedef long long int lli;

bool can(int m, int s){
    return s >= 0 && s <= 9 * m;
}

int main() {
	fast
	int m, s; cin >> m >> s;
	int sMin = s, sMax = s;
	string minn="", maxn="";
	if(!can(m, s) || (m>1 && s==0))
		return cout << "-1 -1", 0;
    for (int i = 0; i < m; i++)
        for (int d = 0; d < 10; d++)
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sMin - d)){
                minn += char('0' + d);
                sMin -= d;
                break;
            }
    for (int i = 0; i < m; i++)
        for (int d = 9; d >= 0; d--)
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sMax - d)){
                maxn += char('0' + d);
                sMax -= d;
                break;
            }
    cout << minn << " " << maxn;
	return 0;
}
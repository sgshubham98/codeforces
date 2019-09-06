#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int p;
    cin >> p;
    int x[200];
    for(int i=0;i<p;i++)
        cin >> x[i];
    int q;
    cin >> q;
    for(int i=p;i<p+q;i++)
        cin >> x[i];
    unordered_set<int> s(x,x+p+q);
    if(s.size()==n)
        cout <<  "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int chest=0, biceps=0, back=0;
    int tmp,count=0;
    for(int i=0;i<n;i++){
        cin >> tmp;
        count += 1;
        if(count == 1)
            chest += tmp;
        else if(count == 2)
            biceps += tmp;
        else if(count == 3)
            back += tmp;
        if(count == 3)
            count = 0;
    }
    if(chest>back && chest>biceps)
        cout << "chest";
    else if(back>chest && back>biceps)
        cout << "back";
    else
        cout << "biceps";
}
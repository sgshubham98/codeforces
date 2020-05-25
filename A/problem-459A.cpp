#include<bits/stdc++.h>

using namespace std;

int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx,dy;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    if(dx != 0 && dy != 0){
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
    }
    else if(dx != 0){
        x3 = x1;
        y3 = y1 + dx;
        x4 = x2;
        y4 = y2 + dx;
    }
    else{
        x3 = x1 + dy;
        y3 = y1;
        x4 = x2 + dy;
        y4 = y2;
    }
    
    if(dx != 0 &&  dy != 0 && dx != dy)
        cout << -1;
    else
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
    
    return 0;
}
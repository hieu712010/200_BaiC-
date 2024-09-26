#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    if(x1 == x2){
        int len = abs(y1 - y2);
        if(x1 + len <= 1000 && x1 + len >= -1000)
            cout << x1 + len << " " << y1 << " " << x2 + len << " " << y2;
        else if(x1 - len <= 1000 && x1 - len >= -1000)
            cout << x1 - len << " " << y1 << " " << x2 - len << " " << y2;
        else cout << "-1";
    }else if(y1 == y2){
        int len = abs(x1 - x2);
        if(y1 + len <= 1000 && y1 + len >= -1000)
            cout << x1 << " " << y1 + len << " " << x2 << " " << y2 + len;
        else if(y1 - len <= 1000 && y1 - len >= -1000)
            cout << x1 << " " << y1 - len << " " << x2 << " " << y2 - len;
        else cout << "-1";
    }else if(abs(x1 - x2) == abs(y1 - y2))
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    else cout << "-1";

    return 0;
}
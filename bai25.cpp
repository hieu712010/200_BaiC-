#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y; cin >> x >> y;

    if(y == 0) cout << "No";
    else if(y == 1)
        if(x == 0) cout << "Yes";
        else cout << "No";
    else 
        if(x - y + 1 < 0) cout << "No";
        else if((x - y + 1) % 2) cout << "No";
        else cout << "Yes";

    return 0;
}
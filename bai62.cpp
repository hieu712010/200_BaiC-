#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    
    int res = 0, sl = a + b;
    while(sl >= c){
        int sl2 = sl / c;
        res += sl2;
        sl = sl % c + sl2;
    }

    cout << res;

    return 0;
}
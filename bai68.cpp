#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, m; cin >> h >> m;
    int res = h * 60 + m - 45;

    if(res < 0)
        res += 24 * 60;

    cout << res / 60 << " " << res % 60;

    return 0;
}
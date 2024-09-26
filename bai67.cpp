#include <bits/stdc++.h>
using namespace std;

int main(){    
    int n; cin >> n;
    int cnt = 1, res = 1;

    while(res <= n){
        res *= 2;
        cnt++;
    }

    cout << cnt - 2 << " " << n - res / 2;

    return 0;
}
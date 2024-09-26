#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;

    if(m > n) cout << "-1";
    else{
        int res = INT_MAX;
        for(int i = n / 2; i <= n; i++){
            if(i % m == 0)
                res = min(res, i);
        }
        cout << res;
    }

    return 0;
}
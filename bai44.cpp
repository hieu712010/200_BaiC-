#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int res = -1;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(k % x == 0 && x > res)
            res = x;
    }

    cout << k / res;

    return 0;
}
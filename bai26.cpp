#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[k];

        for(int &x : a) cin >> x;

        int res = a[0];

        for(int i = 1; i < k; i++)
            res = max(res, (a[i] - a[i - 1]) / 2);
        res = max(res, n - a[k - 1] + 1);
        cout << res << endl;
    }

    return 0;
}
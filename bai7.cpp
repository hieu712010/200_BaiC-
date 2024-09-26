#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;

        sort(a, a + n);
        sort(b, b + n);

        int res = 0;

        for(int i = 0; i < n; i++)
            res = max(res, abs(a[i] - b[i]));
        
        cout << res << endl;

        return 0;
    }
}
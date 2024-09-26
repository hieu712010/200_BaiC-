#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n, p; cin >> n >> p;
        int cnt = 0;

        for(int i = p; i <= n; i++){
            int tmp = i;
            while(tmp % p == 0){
                cnt++;
                tmp /= p;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
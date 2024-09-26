#include <bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        while(n > 10){
            int sum = n % 10;
            while(n > 0)
                n /= 10;
            n = sum;
        }
        cout << n << endl;
    }

    return 0;
}
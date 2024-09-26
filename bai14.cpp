#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n, x, y; cin >> x >> y >> n;
        if(n == 1){
            x *= 2;
            cout << max(x, y) / min(x, y) << endl;
        }else if(n % 2 == 0){
            x *= 2;
            y *= 2;
            cout << max(x, y) / min(x, y) << endl;
        }else{
            x *= 2;
            x *= 2;
            y *= 2;
            cout << max(x, y) / min(x, y) << endl;
        }
    }

    return 0;
}
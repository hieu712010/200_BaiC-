#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b, c; cin >> n >> a >> b >> c;
    
    if(a <= b - c) cout << n / a;
    else{
        long long res = 0;
        if(n >= b){
            res += (n - b) / (b - c) + 1;
            n -= ((n - b) / (b - c) + 1) * (b - c);
        }
        res += n / a;
        
        cout << res;
    }

    return 0;
}
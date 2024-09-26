#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n, a, b; cin >> n >> a >> b;
        if(n == 1) cout << a;
        else if(a * 2 <= b) cout << a * n;
        else cout << n / 2 * b + (n % 2) * a;
        cout << endl;
    }
    
    return 0;
}
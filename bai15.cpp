#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll bcnn(int a, int b){
    return a / __gcd(a, b) * b;
}

int main(){
    int t; cin >> t;
    while(t--){
        int l, r, a, b; cin >> l >> r >> a >> b;
        cout << (r / a - (l - 1) / a) + (r / b - (l - 1) / b) - (r / bcnn(a, b) + (l - 1) / bcnn(a, b)) << endl;        
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p, l, r; cin >> n >> p >> l >> r;

    if(l == 1 && r == n) cout << "0";
    else if(l == 1 && r < n) cout << abs(p - r) + 1;
    else if(l > 1 && r == n) cout << abs(p - l) + 1;
    else cout << r - l + min(abs(p - l), abs(p - r)) + 2;
    
    return 0;
}
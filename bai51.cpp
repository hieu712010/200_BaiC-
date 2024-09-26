#include <bits/stdc++.h>
using namespace std;

int cnt(int n){
    if(n < 10) return n;
    int res = n / 10 + 9;
    int c = n;

    while(c >= 10) c /= 10;
    if(c > n % 10) res--;

    return res;
}

int main() {
    int l, r;
    cin >> l >> r;

    cout << cnt(r) - cnt(l - 1) << endl;

    return 0;
}


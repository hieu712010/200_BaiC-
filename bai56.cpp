#include <bits/stdc++.h>
using namespace std;

int res(int a, int b){
    long long a1 = 0, b1 = 0;
    while(a > 0){
        a1 = a1 * 10 + a % 10;
        a /= 10;
    }
    while(b > 0){
        b1 = b1 * 10 + b % 10;
        b /= 10;
    }
    return max(a1, b1);
}

int main() {
    int a, b; cin >> a >> b;

    cout << res(a, b);

    return 0;
}

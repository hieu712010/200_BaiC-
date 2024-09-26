#include <bits/stdc++.h>
using namespace std;

int main(){
    long long l, r; cin >> l >> r;
    long long sum = r * (r + 1) / 2 - l * (l - 1) / 2;
    l = (l + 12) / 13 * 13;
    r = (r / 13) * 13;
    long long cnt = (r - l) / 13 + 1;

    cout << sum - cnt * (l + r) / 2;

    return 0;
}
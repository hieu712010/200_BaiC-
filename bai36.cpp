#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b; cin >> n >> m >> a >> b;

    int cnt1 = n / m;
    int cnt2 = n % m;
    int c1 = (cnt1 + (cnt2 > 0 ? 1 : 0)) * b;
    int c2 = cnt1 * b + cnt2 * a;
    int c3 = n * a;

    cout << min({c1, c2, c3});

    return 0;
}
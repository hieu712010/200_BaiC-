#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    vector <int> v = {a, b, c};

    sort(v.begin(), v.end());
    if(abs(v[0] - v[1]) > abs(v[1] - v[2])) cout << a + b - c;
    else if(abs(v[0] - v[1]) < abs(v[1] - v[2])) cout << b + b - a;
    else cout << c + c - b;

    return 0;
}

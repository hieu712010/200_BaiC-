#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, r; cin >> a >> b >> r;

    if(min(a, b) < 2 * r)
        cout << "Second";
    else cout << "First";

    return 0;
}

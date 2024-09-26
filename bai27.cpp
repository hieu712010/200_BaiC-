#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, x, y, z; cin >> a >> b >> x >> y >> z;

    cout << max(2 * x + y - a, 0LL) + max(0LL, 3 * z + y - b);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1, a2, a3, b1, b2, b3, n; cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int a = a1 + a2 + a3, b = b1 + b2 + b3;

    if((a + 5 - 1) / 5 + (b + 10 - 1) / 10 > n)
        cout << "NO";
    else cout << "YES";
    
    return 0;
}
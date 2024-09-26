#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;

    if(a + b == 0 || abs(a - b) > 1)
        cout << "NO";
    else cout << "YES";

    return 0;
}
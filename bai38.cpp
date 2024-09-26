#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a; cin >> n >> a;

    a % 2 ? cout << (a - 1) / 2 + 1 : cout << (n - a) / 2 + 1;

    return 0;
}
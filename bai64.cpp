#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];

    for(int &x : a) cin >> x;

    int sum = accumulate(a, a + n, 0);

    cout << (sum % 4 != 0 ? sum / 4 + 1 : sum / 4);

    return 0;
}
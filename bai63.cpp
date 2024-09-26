#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long long res = 0;

    for(long long i = 1; i <= n; i++)
        res += i * (i + 1) / 2;

    cout << res; 

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a; cin >> n >> a;
    int d[10] = {};

    for(int i = a; i < n + a; i++){
        int n = i;
        while(n > 0){
            d[n % 10]++;
            n /= 10;
        }
    }

    for(int x : d) cout << x << " ";

    return 0;
}
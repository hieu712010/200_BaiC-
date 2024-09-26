#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;

    for(int i = 0; i <= n; i++){
        int sum = 2 * i + 3 * (n - i);
        if(sum == k){
            cout << i;
            break;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k; cin >> n >> k;
    long long sum = 0;

    while(k >= 0){
        sum += n;
        n *= 10;
        k--;
    }

    cout << sum;

    return 0;
}
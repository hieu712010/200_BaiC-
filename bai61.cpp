#include <bits/stdc++.h>
using namespace std;

int tcs(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n; cin >> n;
    int res = INT_MAX;
    bool check = false;

    for(int i = 1; i <= 81; i++)
        if(n % i == 0){
            int k = n / i;
            if(tcs(k) == i){
                check = true;
                res = min(res, k);
            }
        }

    cout << (check ? res : -1);

    return 0;
}
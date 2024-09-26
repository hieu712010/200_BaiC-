#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n <= 1) return false;
    int sum = 1;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            if(i == n / i) sum += i;
            else sum += i + (n / i);
            if(sum > n) return true;
        }
    }
    return false;
}

int main(){
    int n; cin >> n;

    cout << (check(n) ? "1" : "0");

    return 0;
}

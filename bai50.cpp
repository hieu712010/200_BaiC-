#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int sum = 0;

    while(n > 0){
        sum += n % 10;
        n /= 10;
    }

    if(trunc(sqrt(sum)) == sqrt(sum)) cout << "YES";
    else cout << "NO";

    return 0;
}
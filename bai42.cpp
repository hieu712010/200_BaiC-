#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    
    n % 2 == 0? cout << n / 2 : cout << -(n / 2 + 1); 

    return 0;
}
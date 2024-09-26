#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector <int> a(n);
    long long sum = 0;

    for(int &x : a){
        cin >> x;
        sum += x / k;
        if(x % k != 0) sum++;
    }
    
    sum % 2 != 0 ? cout << sum / 2 + 1 : cout << sum / 2;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];

    for(int &x : a) cin >> x;

    long long sum = accumulate(a, a + n, 0LL);

    if(sum % 2 > 0){
        sort(a, a + n);
        for(int x : a)
            if(x % 2 > 0){
                sum -= x;
                break;
            }
    }

    cout << sum;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int cnt = 0;

        while(n > 0){
            cnt += n % 2;
            n /= 2;
        }
        cnt % 2 == 1 ? cout << "odd" : cout << "even";
        cout << endl;
    }

    return 0;
}
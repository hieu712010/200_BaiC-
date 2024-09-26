#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long a, b, n, s; cin >> a >> b >> n >> s;
        cout << (a * n + b >= s ? "YES" : "NO") << endl;
    }
    
    return 0;
}
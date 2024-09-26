#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c, d; cin >> a >> b >> c >> d;
        int s = a + b + c + d;
        if(s % 2) cout << "NO" << endl;
        else{
            if(max({a, b, c, d}) == 2 || max({a, b, c, d}) + min({a, b, c, d}) == s / 2){
                cout << "YES" << endl;
                continue;
            }
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
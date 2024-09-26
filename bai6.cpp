#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int s = 0;
        for(int i = 1; i < n; i++){
            s += i;
            if(s == n){
                cout << "1" << endl;
                break;
            }else if(s > n){
                cout << "0" << endl;
                break;
            }
        }
    }

    return 0;
}
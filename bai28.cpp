#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b; cin >> n >> a >> b;
    bool check = false;
    int i = 0;
    for(; i * a <= n; i++){
        if((n - i * a) % b == 0){
            check = true;
            break;
        }
    }

    if(check){
        cout << "YES" << endl;
        cout << i << " " << (n - i * a) / b;
    }else cout << "NO";

    return 0;
}
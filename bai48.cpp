#include <bits/stdc++.h>
using namespace std;

bool snt(int n){
    if(n < 2) return false;
    if(n < 4) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i += 6)
        if(n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    freopen("main.inp", "r", stdin);
    freopen("main.out", "w", stdout);
    int n; cin >> n;
    if(n <= 12){
        cout << "-1";
        return 0;
    }    
    
    for(int y = 3; y * y <= n; y++){
        if(snt(y)){
            long long z = 4 + y * y;
            if(snt(z)) cout << 2 << " " << y << " " << z << endl;
        }
    }

    return 0;
}

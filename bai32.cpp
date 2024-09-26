#include <bits/stdc++.h>
using namespace std;

main(){
    int a, b, c; cin >> a >> b >> c;

    while(c % b && c > 0){
        c -= a;
    }

    if(c >= 0) cout << "YES";
    else cout << "NO";
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
    
int main(){
    int a, b, s; cin >> a >> b >> s;

    if(abs(a) + abs(b) > s) cout << "NO";
    else if((s - (abs(a) + abs(b))) % 2 == 0) cout << "YES";
    else cout << "NO";

    return 0;
}
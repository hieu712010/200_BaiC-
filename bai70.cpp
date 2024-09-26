#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int cnt = 0;

    for(int i = 1; i < m; i++) 
        if((i * n) % m == 0) cnt++;

    cout << m - cnt - 1;
    
    return 0;
}
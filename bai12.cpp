#include <bits/stdc++.h>
using namespace std;

vector <int> v(100001, 0);
void init(){
    v[0] = 0;
    v[1] = 0;

    for(int i = 2; i <= 100000; i++){
        v[i] = i - 2 + v[i - 2];
    }
}

int main(){
    init();
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        cout << v[k] << endl;
    }

    return 0;
}
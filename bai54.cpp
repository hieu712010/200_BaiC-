#include <bits/stdc++.h>
using namespace std;

vector <int> v;
void init(){
    int k = 1;
    while(true){
        int s = k * (k + 1) / 2;
        if(s > 1e9) break;
        v.push_back(s);
        k++;
    }
}

bool check(int a){
    set <int> se(v.begin(), v.end());
    for(int x : v)
        if(se.find(a - x) != se.end()) return true;
    return false;
}

int main() {
    init();
    int t; cin >> t;
    while(t--){
        int a; cin >> a;
        check(a) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}

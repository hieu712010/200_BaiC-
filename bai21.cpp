#include <bits/stdc++.h>
using namespace std;


bool check(int n){
    int s = 0;
    while(n > 0){
        s += n % 10;
        if(s > 10) return false;
        n /= 10;
    }
    return s == 10;
}

int main(){
    vector <int> res;
    for(int i = 19; i <= 100000000; i += 9) 
        if(check(i)) res.push_back(i);

    int k; cin >> k;

    cout << res[k - 1];

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    string s = "";
    while(n > 0){
        s += n % 10 + 48;
        n /= 10;
    }
    return count(s.begin(), s.end(), '8');
}

int main(){
    int n; cin >> n;
    int cnt = 0;

    for(int i = n; i <= INT_MAX; i++){
        if(check(i) && i != n) break;
        cnt++;
    }

    cout << cnt;

    return 0;
}
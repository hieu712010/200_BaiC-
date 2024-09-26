#include <bits/stdc++.h>
using namespace std;

int main(){
    string n; cin >> n;
    string s = n;

    reverse(s.begin(), s.end());

    cout << (s == n ? "YES" : "NO");

    return 0;
}
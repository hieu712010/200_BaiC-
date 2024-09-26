#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c; cin >> a >> b >> c;
    double h = sqrt(c * c - pow(((b - a) / 2), 2));
    double dt = (a + b) * h / 2;
    
    cout << fixed << setprecision(2) << (a + b) * h / 2 - ((h / 4) * (h / 4) * 3.14);
    
    return 0;
}
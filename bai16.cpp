#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll n, a, b; cin >> n >> a >> b;
    ll dt = 6 * n;

    if(a * b >= dt){
        cout << a * b << endl << a << " " << b;
        return 0;
    }

    int MIN = INT_MAX;
    ll res1 = 0, res2 = 0;

    if(a > b) swap(a, b);

    for(ll i = a; i <= sqrt(dt); i++){
        ll j = dt / i;
        if(dt % i != 0) j++;
        if(j < b) j = b;
        if(i * j < MIN){ 
            MIN = i * j;
            res1 = i;
            res2 = j;
        }
    }    

    cout << res1 * res2 << endl << res1 << " " << res2;

    return 0;
}
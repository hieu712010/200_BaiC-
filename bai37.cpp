#include <bits/stdc++.h>
using namespace std;

vector <bool> snt(1e6, true);
void sieve(){
    snt[0] = snt[1] = false;
    for(int i = 2; i * i <= 1e6; i++)
        if(snt[i])
            for(int j = i * i; j <= 1e6; j += i)
                snt[j] = false;
}

int main(){
    sieve();
    int n; cin >> n;

    for(int i = 4; i <= n; i++){
        int j = n - i;
        if(!snt[i] && !snt[j]){
            cout << i << " " << j;
            break;
        }
    }

    return 0;
}
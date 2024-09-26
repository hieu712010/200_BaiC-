#include <bits/stdc++.h>
using namespace std;

int main(){
    int ht, at, dt, hy, ay, dy, h, a, d; cin >> ht >> at >> dt >> hy >> ay >> dy >> h >> a >> d;
    int res = INT_MAX;
    
    for(int i = at; i <= 200; i++){
        for(int j = dt; j <= 100; j++){
            if(i <= dy)
                continue;
            int r = (hy + (i - dy - 1)) / (i - dy);
            int k = max((ay - j) * r + 1, ht);
            res = min(res, (k - ht) * h + (i - at) * a + (j - dt) * d);
        }
    }

    cout << res;

    return 0;
}
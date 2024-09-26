#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int t, q, l; cin >> t >> q >> l;
        int res1 = 0, res2 = 0;
        while(l > 1){
            if(t % l == 0){
                res1++;
                t--;
            }else if(q % l == 0){
                res2++;
                q--;
            }else l--;
        }
        cout << res1 << " " << res2 << endl;
    }

    return 0;
}
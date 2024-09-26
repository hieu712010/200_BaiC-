#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int l[n], r[n];
        for(int i = 0; i < n; i++) cin >> l[i] >> r[i];

        int cnt = 1;

        for(int i = 0; i < n; i++){
            if(l[i] >= cnt) cnt = l[i];
            if(r[i] < cnt && i != 0){
                cout << "0 ";
                continue;
            }else{
                cout << cnt << " ";
                cnt++;
            }
        }
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];

        for(int &x : a) cin >> x;

        sort(a, a + n);

        int cnt = 0;

        for(int i = 0; i < n; i++)
            if(a[i] - a[i - 1] == 1)
                cnt++;

        cout << (cnt ? "2" : "1") << endl;
    }
    
    return 0;
}
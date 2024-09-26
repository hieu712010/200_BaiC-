#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        for(char &x : s)
            if(x == '0')
                x = '5';

        cout << s << endl;
    }

    return 0;
}
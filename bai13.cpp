#include <bits/stdc++.h>
using namespace std;

vector <string> v;
void init(){
    queue <string> q;
    q.push("4");
    q.push("7");
    v.push_back("4");
    v.push_back("7");

    while(v.size() <= 1000){
        string top = q.front();
        q.pop();
        q.push(top + '4');
        q.push(top + '7');
        v.push_back(top + '4');
        v.push_back(top + '7');
    }
}

int main(){
    init();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << v[n - 1] << endl;
    }

    return 0;
}
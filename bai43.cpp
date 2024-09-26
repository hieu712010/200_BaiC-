#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    queue <pair <int, int>> q;

    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        q.push({i, x});
    }

    int res = 0;

    while(!q.empty()){
        auto top = q.front();
        q.pop();

        int idx = top.first;
        int cnt = top.second;

        if(cnt > m)
            q.push({idx, cnt - m});
        else res = idx;
    }

    cout << res;

    return 0;
}
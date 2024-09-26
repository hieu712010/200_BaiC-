#include <iostream>


bool check(int h, int m){
    return h % 10 == 7 || h / 10 == 7 || m % 10 == 7 || m / 10 == 7;
}

main(){
    int x, h, m; std::cin >> x >> h >> m;    
    int cnt = 0;

    while(true){
        if(check(h, m)) break;
        cnt++;
        m -= x;
        if(m < 0){
            m += 60;
            h--;
            if(h < 0) h = 23;
        }
    }

    std::cout << cnt;

    return 0;
}
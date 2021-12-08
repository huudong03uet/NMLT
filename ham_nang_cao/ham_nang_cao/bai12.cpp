#include <iostream>
using namespace std;
bool isHappyNumber(int n) {
    int m = n;
    for (int i = 0; i < 10000; i++) {
        int cnt = 0;
        while (n) {
            cnt += (n % 10) * (n % 10);
            n /= 10;
        }
        if (cnt == 1) return 1;
        if (cnt == m) return 0;
        n = cnt;
    }
    return 0;
}
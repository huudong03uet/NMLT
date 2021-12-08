#include<bits/stdc++.h>
using namespace std;
bool isMersenne(int p) {
    int p1 = p + 1;
    int ans = 0;
    for (int i = 0;; i++) {
        int  n = (int)pow(2, i);
        if (n > p1) {
            break;
        }
        else if (n == p1) {
            return true;
        }
    }
    return false;
}
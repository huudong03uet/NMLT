#include <iostream>
using namespace std;
int hammingDistance(int x, int y) {
    int cnt = 0;
    for (int i = 1; i <= 32; i++)
        if (((x >> i) & 1) != ((y >> i) & 1)) cnt++;
    return cnt;
}
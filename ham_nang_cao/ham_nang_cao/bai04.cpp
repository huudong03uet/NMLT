#include <iostream>
using namespace std;
bool canPlaceFlowers(int flowerbed[], int n, int k) {
    int cnt = 0;
    if (flowerbed[0] == 0 && flowerbed[1] == 0) {
        cnt++; flowerbed[0] = 1;
    }
    if (flowerbed[n - 1] == 0 && flowerbed[n - 2] == 0) {
        cnt++; flowerbed[n - 1] = 1;
    }
    for (int i = 1; i <= n - 2; i++)
        if (flowerbed[i] == 0 && flowerbed[i + 1] == 0 && flowerbed[i - 1] == 0) {
            flowerbed[i] = 1; cnt++;
        }
    if (cnt >= k) return 1;
    else return 0;
}
#include <iostream>
using namespace std;
bool judgeSquareSum(int number) {
    for (int i = 1; i < sqrt(number / 2); i++) {
        int x = number - i * i;
        int x1 = sqrt(x);
        if (x1 * x1 == x) return 1;
    }
    return 0;
}
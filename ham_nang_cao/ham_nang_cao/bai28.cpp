#include <iostream>
using namespace std;
bool isUgly(int n) {
    while (n % 2 == 0) { n /= 2; }
    while (n % 3 == 0) { n /= 3; }
    while (n % 5 == 0) { n /= 5; }
    if (n == 1) return 1;
    else return 0;
}
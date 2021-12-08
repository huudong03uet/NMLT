#include <iostream>
using namespace std;
double harmonic(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) sum += 1 * 1.0 / i;
    return sum;
}
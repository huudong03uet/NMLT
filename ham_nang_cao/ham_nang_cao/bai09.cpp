#include <iostream>
using namespace std;
long long int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
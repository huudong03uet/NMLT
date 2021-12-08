#include <iostream>
using namespace std;
bool isPrime(int number) {
    if (number < 2) return 0;
    if (number <= 3) return 1;
    if (number % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(number); i += 2)
        if (number % i == 0) return 0;
    return 1;
}
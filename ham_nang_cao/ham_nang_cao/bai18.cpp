#include <iostream>
using namespace std;
int maxThree(int a, int b, int c) {
    if (a > b && a > c) return a;
    else if (b > c) return b;
    else return c;
}
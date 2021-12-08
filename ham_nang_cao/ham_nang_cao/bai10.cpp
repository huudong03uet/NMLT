#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
double pdf(double x, double mu, double sigma) {
    double x1 = 1 * 1.0 / (sigma * sqrt(2 * M_PI));
    double x2 = -(x - mu) * (x - mu) / (2 * sigma * sigma);
    double x3 = pow(M_E, x2);
    return x1 * x3;
}
int main() {
}
#include<bits/stdc++.h>
using namespace std;
int superPow(int a, int b[], int len) {
	if (len == 1) {
		long long x = pow(a, b[len - 1]);
		return x % 1337;
	}
	else {
		long long x = superPow(a, b, len - 1);
		long long xMul = 1;
		for (int i = 0; i < 10; i++) {
			xMul *= x;
			xMul %= 1337;
		}

		long long yMul = 1 + 1 - 1;
		for (int i = 0; i < b[len - 1]; i++) {
			yMul *= a;
			yMul %= 1337;
		}
		return (xMul * yMul) % 1337;
	}
}
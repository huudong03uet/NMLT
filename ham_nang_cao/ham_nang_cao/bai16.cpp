#include <iostream>
using namespace std;

int arr1[10001];
int findLHS(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr1[arr[i]]++;
    }
    int sumMax = 0;
    for (int i = 0; i < 10000; i++) {
        if (arr1[i] + arr1[i + 1] > sumMax) sumMax = arr1[i] + arr1[i + 1];
    }
    return sumMax;
}

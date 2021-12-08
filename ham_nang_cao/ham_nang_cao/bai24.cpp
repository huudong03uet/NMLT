#include <iostream>
using namespace std;
void rotate(int arr[], int n, int k) {
    k = k % n;
    int arr1[10001];
    for (int i = 0; i < n; i++) arr1[i] = arr[i];
    for (int i = 0; i < k; i++)  arr[i] = arr1[n - k + i];
    for (int i = k; i < n; i++) arr[i] = arr1[i - k];
}
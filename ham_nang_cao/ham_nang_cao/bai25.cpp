#include <iostream>
#include <algorithm>
using namespace std;
void sort(float array[], int size, bool isAscending) {
    float* array1 = new float[size];
    //double array1[size];
    for (int i = 0; i < size; i++) array1[i] = array[i];
    if (isAscending == 1) sort(array1, array1 +size);
    else sort(array1, array1 + size, greater<float>());
    for (int i = 0; i < size; i++) array[i] = array1[i];
    delete[] array1;
}
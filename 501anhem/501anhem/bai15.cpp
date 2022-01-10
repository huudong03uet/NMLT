#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;
int main() {
    string path;
    cin >> path;
    ifstream inFile(path);
    int n = 0;
    int* arr = new int[100];

    if (inFile) {
        while (!inFile.eof()) {
            inFile >> arr[n];
            n++;
        }
        sort(arr, arr + n - 1);
        cout << arr[n - 2] << " " << arr[0];

        inFile.close();
    }
    else {
        cout << "Mission failed";
    }
    return 0;
}
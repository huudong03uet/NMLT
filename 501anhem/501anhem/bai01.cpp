#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string path;
    cin >> path;
    ifstream file(path);
    int n;
    while (!file.eof()) {
        if (file.read((char*)&n, sizeof(int))) {
            cout << n << " ";
        }
    }
    return 0;
}

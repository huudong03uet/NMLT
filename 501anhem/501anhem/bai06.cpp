#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    string n;
    cin >> n;
    ifstream inFile(n);
    if (inFile) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
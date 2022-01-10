#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
int main() {
    string path;
    cin >> path;
    ifstream inFile(path);
    string s1, s2, s3, s4;
    double n1, n2;
    while (!inFile.eof()) {
        if (inFile >> s1) {
            inFile >> s2;
            inFile >> s3;

            if (s2 == "RECTANGLE") {
                inFile >> n1;
                inFile >> s4;
                inFile >> n2;
                cout << fixed << setprecision(2) << n1 * n2 << endl;
            }
            else {
                inFile >> n1;
                if (s2 == "SQUARE") {
                    cout << n1 * n1 << endl;
                }
                else {
                    cout << fixed << setprecision(2) << n1 * 3.14159 * 2 << endl;
                }
            }
        }
    }
    return 0;
}
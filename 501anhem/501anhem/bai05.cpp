#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
int main() {
    string n;
    cin >> n;
    ifstream inFile(n);
    double m;
    while (!inFile.eof()) {
        if (inFile.read((char*)&m, sizeof(double))) {
            cout << fixed << setprecision(5) << m << endl;
        }
    }
    inFile.close();
    return 0;
}
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
    string path;
    cin >> path;
    ifstream inFile(path);
    while (!inFile.eof()) {
        char n;
        if (inFile.read((char*)&n, sizeof(char))) 
            cout << n;
        
    }
    return 0;
}
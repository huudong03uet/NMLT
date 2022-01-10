#include<iostream>
#include<fstream>
using namespace std;
int main() {
    string s;
    cin >> s;
    ifstream inFile(s);
    if (inFile) {
        int count = 0;
        while (!inFile.eof()) {
            string s1;
            getline(inFile, s1);
            count++;
        }
        cout << count;
    }
    else {
        cout << "Mission failed";
    }
    return 0;
}
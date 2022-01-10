#include <iostream>
#include <fstream>
using namespace std;
void decrypt(int k, string message) {
    int n = -k % 26; int m = -k % 10;
    for (int i = 0; i < message.length(); i++) {
        char x = message[i];
        if (isupper(message[i])) {
            if (x + n > 'Z') {
                message[i] = char(n + x - 'Z' + 'A' - 1);
            }
            else {
                message[i] = (char)(x + n);
            }
        }
        if (islower(message[i])) {
            if (x + n > 'z') {
                message[i] = char(n + x - 'z' + 'a' - 1);
            }
            else {
                message[i] = (char)(x + n);
            }
        }
        if (message[i] <= '9' && message[i] >= '0') {
            char x = message[i];
            if (x + m > '9') {
                message[i] = char(m + x - '9' + '0' - 1);
            }
            else {
                message[i] = (char)(x + m);
            }
        }
    }
    ifstream inFile(message);
    while (!inFile.eof()) {
        string x; getline(inFile, x);
        cout << x << endl;
    }
}
#include <iostream>
using namespace std;
string cipher(int k, string message) {
    int n1 = k % 26;
    for (int i = 0; i < message.length(); i++) {
        if (isupper(message[i])) {
            int n = message[i];
            if (n + n1 > 'Z') message[i] = (char)(n1 - ('Z' - n) + 'A' - 1);
            else message[i] = (char)(n + n1);
        }
        if (islower(message[i])) {
            int n = message[i];
            if (n + n1 > 'z') message[i] = (char)(n1 - ('z' - n) + 'a' - 1);
            else message[i] = (char)(n + n1);
        }
    }
    int n2 = k % 10;
    for (int i = 0; i < message.length(); i++)
        if (message[i] <= '9' && message[i] >= '0') {
            int n = message[i];
            if (n + n2 > '9') message[i] = (char)(n2 - ('9' - n) + '0' - 1);
            else message[i] = (char)(n + n2);
        }
    return message;
}
#include <iostream>
using namespace std;
void printArrow(int n, bool left) {
    if (left == 0) {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < i; j++) cout << "  ";
            for (int j = 1; j <= n - i + 1; j++) cout << "*";
            cout << endl;
        }
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 1; j < i; j++) cout << "  ";
            for (int j = 1; j <= n - i + 1; j++) cout << "*";
            cout << endl;
        }
    }
    else {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++) cout << " ";
            for (int j = 1; j <= n - i + 1; j++) cout << "*";
            cout << endl;
        }
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 1; j <= n - i; j++) cout << " ";
            for (int j = 1; j <= n - i + 1; j++) cout << "*";
            cout << endl;
        }
    }

}
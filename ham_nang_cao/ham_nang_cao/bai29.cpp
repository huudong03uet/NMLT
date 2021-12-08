#include <iostream>
#include <vector>
using namespace std;
bool isValid(string s) {
    vector<char> v;
    for (int i = 0; i < s.length(); i++) {
        char x = s[i];
        if (x == '(' || x == '[' || x == '{') { v.push_back(x); }
        else {
            if (v.empty()) return 0;
            if (v.back() == '(' && x == ')' || v.back() == '{' && x == '}' || v.back() == '[' && x == ']')
                v.pop_back();
            else return 0;
        }
    }
    if (v.empty()) return 1;
    else return 0;
}
int main() {
    if (isValid("{[()]}")) cout << "yes";
    return 0;
}
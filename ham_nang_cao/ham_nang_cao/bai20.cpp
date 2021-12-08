#include <iostream>
#include <vector>
using namespace std;
vector<int> getDigits(unsigned int number) {
    vector<int> v;
    while (number) {
        int n = number % 10;
        v.insert(v.begin(), 1);
        number /= 10;
    }
    return v;
}
vector<int> getCorrectResponse(vector<int> pin, vector<int> num) {
    vector<int> v;
    for (int i = 0; i < pin.size(); i++) {
        int x = pin[i];
        v.push_back(num[x]);
    }
    return v;
}
void printDigits(vector<int> digits) {
    for (auto i : digits) cout << i;
}
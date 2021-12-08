#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findRadius(vector<int> houses, vector<int> heaters) {
    int nMax = 0;
    for (auto i : houses) {
        int nMin = INT_MAX;
        for (auto j : heaters) nMin = min(nMin, abs(i - j));
        nMax = max(nMin, nMax);
    }
    return nMax;
}
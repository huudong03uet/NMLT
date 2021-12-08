#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr1[200], arr2[200];
int arr1[200], arr2[200];
bool isIsomorphic(string a, string b) {
    if (a.length() != b.length()) return 0;
    for (int i = 0; i < a.length(); i++) arr1[a[i]]++;
    for (int i = 0; i < b.length(); i++) arr2[b[i]]++;
    vector<int> v1, v2;
    for (int i = 'a'; i <= 'z'; i++) {
        v1.push_back(arr1[i]);
        v2.push_back(arr2[i]);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    if (v1.size() != v2.size()) return 0;
    for (int i = 0; i < v1.size(); i++)
        if (v1[i] != v2[i]) return 0;
    return 1;
}
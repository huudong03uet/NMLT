#include <bits/stdc++.h>
using namespace std;
bool areAnagrams(string str1, string str2) {
    vector<char> v1;
    vector<char> v2;

    for (int i = 0; i < str1.length(); i++)
        if (isalpha(str1[i])) v1.push_back(islower(str1[i]));
    for (int i = 0; i < str2.length(); i++)
        if (isalpha(str2[i])) v2.push_back(islower(str2[i]));
    if (v1.size() != v2.size()) return 0;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for (int i = 0; i < v1.size(); i++)
        if (v1[i] != v2[i]) return 0;
    return 1;
}
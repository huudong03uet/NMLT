#include <iostream>
using namespace std;
bool isLegitCapital(string word) {
    if (isupper(word[0]) && isupper(word[1])) {
        for (int i = 0; i < word.length(); i++)
            if (islower(word[i])) return 0;
        return 1;
    }
    if (islower(word[0])) {
        for (int i = 0; i < word.length(); i++)
            if (isupper(word[i])) return 0;
        return 1;
    }
    for (int i = 1; i < word.length(); i++)
        if (isupper(word[i])) return 0;
    return 1;
}
#include <iostream>
using namespace std;
bool circle(string moves) {
    int cntL = 0, cntU = 0;
    for (int i = 0; i < moves.length(); i++) {
        switch (moves[i]) {
        case 'L': cntL++; break;
        case 'R': cntL--; break;
        case 'U': cntU++; break;
        case 'D': cntU--; break;
        default: break;
        }
    }
    return cntL == 0 && cntU == 0;
}
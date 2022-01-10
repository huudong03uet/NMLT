#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int getMoney(int* houses, char* path) {
    int count = 0, n;
    ifstream file(path);

    while (file >> n) {

        houses[count] = n;
        count++;
    }
    return count;
}
//c1
int rob(int* houses, int numOfHouses) {

    int hasNext = houses[0];
    int none = 0;
    int none_temp;

    for (int i = 1; i < numOfHouses; i++)
    {
        none_temp = max(hasNext, none);
        hasNext = none + houses[i];
        none = none_temp;
    }
    return max(hasNext, none);
}


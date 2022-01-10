int integerReplacement(char* path) {
    ifstream inFile(path);
    long long n; int a = 0;
    inFile >> n;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else if (n % 2 != 0 && (n / 2) % 2 == 1 && n > 3) {
            n++;
        }
        else {
            n--;
        }
        a++;
    }
    return a;
}
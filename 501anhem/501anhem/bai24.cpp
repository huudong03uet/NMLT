int reverse(char* path) {
    ifstream inFile(path);
    int n;
    inFile >> n;
    int nDao = 0;
    while (n) {
        nDao = nDao * 10 + n % 10;
        n /= 10;
    }
    return nDao;
}
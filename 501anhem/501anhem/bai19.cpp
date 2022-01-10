bool canWinNim(char* path) {
    ifstream inFile(path);
    int n;
    inFile >> n;
    if (n % 4 == 0) {
        return 0;
    }
    else {
        return 1;
    }

}
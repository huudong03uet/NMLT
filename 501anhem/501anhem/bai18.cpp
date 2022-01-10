double averageTime(const char* path) {
    ifstream inFile(path);
    double sum = 0; int count = 0;
    string firstR;
    getline(inFile, firstR);
    while (!inFile.eof()) {
        int n;
        char x;
        double y;
        if (inFile >> n) {
            inFile >> x >> y;
            count++; sum += y;
        }
    }
    return sum * 1.0 / count;
}
void housesOfHogwarts(const char* path) {
    ifstream inFile(path);
    char n;
    int m;
    inFile >> m;
    inFile.ignore();
    while (!inFile.eof()) {
        if (inFile.read((char*)&n, sizeof(char))) {
            cout << n;
        }
    }

}
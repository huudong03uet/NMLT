void showClue(char* path) {
    ifstream inFile(path);
    char n;
    while (!inFile.eof()) {
        if (inFile.read((char*)&n, sizeof(char))) {
            cout << n;
        }
    }
}

int countCharacter(const char* path, char letter) {
    ifstream inFile(path);
    int n = 0;
    char a;
    while (!inFile.eof()) {
        if (inFile.read((char*)&a, sizeof(char))) {
            if (a == letter || a == letter - 32) {
                n++;
            }
        }
    }
    inFile.close();
    return n;
}

void findMovies(char* path) {
    ifstream inFile(path);
    string firstR;
    getline(inFile, firstR);
    int count = 0;
    while (!inFile.eof()) {
        int n; char x; string s1, s2; double m;
        if (inFile >> n) {
            inFile >> x;
            inFile.ignore();
            getline(inFile, s1, ',');
            getline(inFile, s2, ',');
            inFile >> m;
            if (m >= 8.0 && s2 != " boring") {
                cout << s1 << endl;
                count++;
            }
        }
    }
    if (count == 0) {
        cout << "All are boring!";
    }

}
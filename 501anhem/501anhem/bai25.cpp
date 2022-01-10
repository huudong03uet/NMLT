double estimatedTime(const char* path) {
    ifstream inFile(path);
    string s1, s2, s3, s4;
    char x;
    double n1, n2, n3, n4, n5;
    inFile >> s1;
    inFile >> x; inFile >> x;
    inFile >> n1;
    inFile >> x; inFile >> x;
    inFile >> n2;
    inFile >> s2;
    inFile >> x; inFile >> x;
    inFile >> n3;
    inFile >> x; inFile >> x;
    inFile >> n4;
    inFile >> s3;
    inFile >> n5;
    inFile >> s4;
    double m = (n3 - n1) * (n3 - n1) + (n4 - n2) * (n4 - n2);
    double n = sqrt(m * 1.0) / n5;
    return n;
}
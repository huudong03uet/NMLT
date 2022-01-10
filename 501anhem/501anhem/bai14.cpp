int kiemTra(string n, string a, int& count) {
    bool isTrue = 1;
    for (int j = 0; j < n.length(); j++)
    {
        bool kiemTra = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == n[j]) {
                kiemTra = 1; break;
            }
        }
        if (kiemTra == 0) {
            isTrue = 0; break;
        }
    }
    if (isTrue == 1) {
        count++;
    }
    return count;
}

int findWords(char* path) {
    ifstream inFile(path);
    int count = 0;
    string a = "`1234567890-=~!@#$%^&*()_+";
    string b = "QWERTYUIOP{}][poiuytrewq";
    string c = "ASDGHJKL:;lkjhgfdsa";
    string d = "ZXCVBNM<>?/.,mnbvcxz";
    while (!inFile.eof()) {
        string n;
        inFile >> n;
        kiemTra(n, a, count);
        kiemTra(n, b, count);
        kiemTra(n, c, count);
        kiemTra(n, d, count);
    }
    return count;
}
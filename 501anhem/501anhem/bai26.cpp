int getWinner(char* path) {
    ifstream inFile(path);
    int n; inFile >> n;
    char** arr = new char* [n];
    for (int i = 0; i < n; i++) arr[i] = new char[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            char x; if (inFile >> x) arr[i][j] = x;
        }
    for (int i = 1; i < n - 1; i++)
        for (int j = 1; j < n - 1; j++)
            if (arr[i + 1][j] == 'X' && arr[i][j + 1] == 'X' && arr[i][j - 1] == 'X' && arr[i - 1][j] == 'X') arr[i][j] = 'X';
    int countX = 0, countO = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) if (arr[i][j] == 'O') countO++; else countX++;
    if (countX > countO) {
        return -1;
    }
    else if (countX == countO) {
        return 0;
    }
    else {
        return 1;
    }

}
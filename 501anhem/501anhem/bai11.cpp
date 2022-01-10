void imageSmoother(char* path) {
    ifstream inFile(path);
    int n, m;
    inFile >> n;
    int** arr = new int* [n + 2];
    int** arr1 = new int* [n + 2];
    for (int i = 0; i < n + 2; i++)
    {
        arr[i] = new int[n + 2];
        arr1[i] = new int[n + 2];
    }
    for (int i = 0; i < n + 2; i++)
    {
        for (int j = 0; j < n + 2; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            inFile >> arr[i][j];
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            int count = 1;
            if ((i == 1 && j == 1) || (i == n && j == 1) || (i == 1 && j == n) || (i == n && j == n)) {
                count = 4;
            }
            else if (i == 1 || i == n || j == 1 || j == n) {
                count = 6;
            }
            else {
                count = 9;
            }

            arr1[i][j] = (arr[i - 1][j - 1] + arr[i][j - 1] + arr[i + 1][j - 1] + arr[i + 1][j] +
                arr[i + 1][j + 1] + arr[i][j + 1] + arr[i - 1][j + 1] + arr[i - 1][j] + arr[i][j]) / count;
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << arr1[i][j] << " ";

        } cout << endl;
    }
}

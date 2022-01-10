int maximumProduct(char* path) {
    cin >> path;
    ifstream inFile(path);
    int n;
    inFile >> n;
    int* arr = new int[n];
    int i = 0;
    while (!inFile.eof()) {
        inFile >> arr[i];
        i++;
    }
    sort(arr, arr + n);

    if (arr[n - 2] * arr[n - 3] > abs(arr[0] * arr[1])) {
        return arr[n - 1] * arr[n - 2] * arr[n - 3];
    }
    else {
        return arr[n - 1] * arr[0] * arr[1];
    }
}
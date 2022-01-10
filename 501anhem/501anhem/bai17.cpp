void moveZeroes(int* arr, char* file) {
    ifstream inFile(file);
    int n;
    inFile >> n;
    arr = new int[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        inFile >> arr[i];
        if (arr[i] == 0) {
            count++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) { cout << arr[i] << " "; }
    }
    for (int i = 0; i < count; i++) {
        cout << 0 << " ";
    }
}

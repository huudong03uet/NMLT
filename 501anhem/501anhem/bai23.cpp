void productExceptSelf(char* path) {
    ifstream inFile(path);
    int n;
    inFile >> n;
    int* arr = new int[n];
    int* arr1 = new int[n];
    for (int i = 0; i < n; i++) {
        inFile >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        int mul = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                mul *= arr[j];
            }
        }
        arr1[i] = mul;
    }
    if (n == 1) {
        cout << arr[0];
    }
    else {
        for (int i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
    }
}
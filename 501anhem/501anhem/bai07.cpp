void grade10(const char* path) {
    ifstream inFile(path);

    while (!inFile.eof()) {
        string* arr = new string[7];
        for (int i = 0; i < 6; i++)
        {
            getline(inFile, arr[i], ',');
        }
        getline(inFile, arr[6]);

        if (arr[5] == "10") {
            cout << arr[1] + " " + arr[2] << endl;
        }
    }
}
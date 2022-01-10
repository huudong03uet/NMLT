void hangNghin(string& a, int& n) {
	int m; m = (n - n % 1000) / 1000;
	switch (m)
	{
	case 0: break;
	case 1: a += "M";
		break;
	case 2: a += "MM";
		break;
	case 3: a += "MMM";
		break;
	default:
		cout << "error";
		break;
	}
	n -= (1000 * m);
}
void hangTram(string& a, int& n) {
	int m; m = (n - n % 100) / 100;
	switch (m)
	{
	case 0: break;
	case 1: a += "C";
		break;
	case 2: a += "CC";
		break;
	case 3: a += "CCC";
		break;
	case 4: a += "CD";
		break;
	case 5: a += "D";
		break;
	case 6: a += "DC";
		break;
	case 7: a += "DCC";
		break;
	case 8: a += "DCCC";
		break;
	case 9: a += "CM";
		break;
	}
	n -= (100 * m);
}
void hangChuc(string& a, int& n) {
	int m; m = (n - n % 10) / 10;
	switch (m)
	{
	case 0: break;
	case 1: a += "X";
		break;
	case 2: a += "XX";
		break;
	case 3: a += "XXX";
		break;
	case 4: a += "XL";
		break;
	case 5: a += "L";
		break;
	case 6: a += "LX";
		break;
	case 7: a += "LXX";
		break;
	case 8: a += "LXXX";
		break;
	case 9: a += "XC";
		break;
	}
	n -= (10 * m);
}
void hangDonVi(string& a, int& n) {
	int m; m = n;
	switch (m)
	{
	case 0: break;
	case 1: a += "I";
		break;
	case 2: a += "II";
		break;
	case 3: a += "III";
		break;
	case 4: a += "IV";
		break;
	case 5: a += "V";
		break;
	case 6: a += "VI";
		break;
	case 7: a += "VII";
		break;
	case 8: a += "VIII";
		break;
	case 9: a += "IX";
		break;
	}
}
void intToRoman(char* path) {
	ifstream inFile(path);
	int n;
	inFile >> n;
	string a = "";
	hangNghin(a, n);
	hangTram(a, n);
	hangChuc(a, n);
	hangDonVi(a, n);
	cout << a;
}
#include "Header.h";

int main()
{
	string str;
	int *arr;
	cout << "yes/no\n";
	getline(cin, str);
	if (str == "yes") {
		int n;
		cin >> n;
		arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
	}
	else {
		int temp[10] = { 4, 1, 3, 2, 10, 8, 9, 7, 5, 6 };
		arr = new int[10];
		arr = temp;
	}
	//for (int i = 0; i < 10; i++) {
	//	cout << arr[i];
	//}

	return 0;
}
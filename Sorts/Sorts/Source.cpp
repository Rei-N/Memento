#include "Header.h";


void Bubble::sortArr() {
	int temp;
	bool nsorted = true;
	if (asc == true) {
		while (nsorted) {
			nsorted = false;
			for (int i = 0; i < n - 1; i++) {
				if (arr[i] > arr[i + 1]) {
					temp = arr[i + 1];
					arr[i + 1] = arr[i];
					arr[i] = temp;
					nsorted = true;
				}
			}
		}
	}
	else {
		while (nsorted) {
			nsorted = false;
			for (int i = 0; i < n - 1; i++) {
				if (arr[i] < arr[i + 1]) {
					temp = arr[i + 1];
					arr[i + 1] = arr[i];
					arr[i] = temp;
					nsorted = true;
				}
			}
		}
	}
};

void Sorts::printSort() {
	for (int i = 0; i < n; i++) {
		cout << arr[i]<<" ";
	}
}

int main()
{
	string str;
	int *arr;
	int n;
	cout << "yes/no\n";
	getline(cin, str);
	if (str == "yes") {
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
		n = 10;
	}
	Bubble bubsort(arr, true, n);
	bubsort.sortArr();
	bubsort.printSort();
	//for (int i = 0; i < 10; i++) {
	//	cout << arr[i];
	//}

	return 0;
}
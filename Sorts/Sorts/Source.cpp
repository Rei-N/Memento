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
	string str, updown;
	bool asc = false;
	int *arr;
	int n;
	cout << "yes/no\n";
	getline(cin, str);
	cout << "asc/desc\n";
	getline(cin, updown);
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
	if (updown == "asc") {
		asc = true;
	}
	Bubble bubsort(arr, asc, n);
	bubsort.sortArr();
	bubsort.printSort();
	delete[] arr;
	return 0;
}
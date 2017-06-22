//#include "Header.h";
//
//
//void Bubble::sortArr() {
//	int temp;
//	bool nsorted = true;
//	if (asc == true) {
//		while (nsorted) {
//			nsorted = false;
//			for (int i = 0; i < n - 1; i++) {
//				if (arr[i] > arr[i + 1]) {
//					temp = arr[i + 1];
//					arr[i + 1] = arr[i];
//					arr[i] = temp;
//					nsorted = true;
//				}
//			}
//		}
//	}
//	else {
//		while (nsorted) {
//			nsorted = false;
//			for (int i = 0; i < n - 1; i++) {
//				if (arr[i] < arr[i + 1]) {
//					temp = arr[i + 1];
//					arr[i + 1] = arr[i];
//					arr[i] = temp;
//					nsorted = true;
//				}
//			}
//		}
//	}
//};
//
//void Sorts::printSort() {
//	for (int i = 0; i < n; i++) {
//		cout << arr[i]<<" ";
//	}
//}
//
//int main()
//{
//	string str, updown;
//	bool asc = false;
//	int *arr;
//	int n;
//	cout << "yes/no\n";
//	getline(cin, str);
//	cout << "asc/desc\n";
//	getline(cin, updown);
//	if (str == "yes") {
//		cin >> n;
//		arr = new int[n];
//		for (int i = 0; i < n; i++) {
//			cin >> arr[i];
//		}
//	}
//	else {
//		int temp[10] = { 4, 1, 3, 2, 10, 8, 9, 7, 5, 6 };
//		arr = new int[10];
//		arr = temp;
//		n = 10;
//	}
//	if (updown == "asc") {
//		asc = true;
//	}
//	Bubble bubsort(arr, asc, n);
//	bubsort.sortArr();
//	bubsort.printSort();
//	//delete[] arr;
//	return 0;
//}

#include <iostream> //1547
#include <math.h>
using namespace std;

bool hasFractionalPart(double val) {
	return val - floor(val) > 0;
}

int main() {
	int m, n, elemsum, begin, end;
	double avarage;
	int triger, last, a_count=0;
	char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
						 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	cin >> n >> m;
	elemsum = pow(26, n);
	avarage = elemsum / m;
	if (!hasFractionalPart(avarage)) {
		for (int i = 0; i < m; i++) {
			begin = i*avarage + 1;
			end = avarage*(i + 1);
			triger = end;
			last = end % 26;
			while (triger > 1) {
				triger /= 26;
				a_count++;
			}
			for (int j = 0; j < a_count; j++) {
				cout << alphabet[begin] << "-" << alphabet[last] << endl;
			}
		}
	}
	return 0;
}
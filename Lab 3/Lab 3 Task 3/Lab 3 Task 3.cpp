#include<iostream>
using namespace std;
int main() {
	int size, negative=0;
	int positive=0;

	cout << "Enter size " << endl;

	cin >> size;
	cout << "Enter Array elements " << endl;
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}

	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			negative++;
		}
	}
		for (int i = 0; i < size; i++) {
			if (arr[i] >= 0) {
				positive++;
			}
		}
	int* arr1 = new int[negative];
	int* arr2 = new int[positive];

	static int pos = 0;
	static int neg = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] >= 0) {
				arr2[pos] = arr[i];
				pos++;	
		}
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
				arr1[neg] = arr[i];
				neg++;
			}
		}
	
	for (int i = 0; i < positive; i++) {
		arr[i] = arr2[i];
	}
	int j = positive--;
	for (int i = 0; i <negative ; i++) {
		arr[j] = arr1[i];
		j++;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
}
#include<iostream>
using namespace std;
int main() {
	int size;
	cout << "Enter size " << endl;
	cin >> size;
	cout << "Enter Array " << endl;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
	int* arr1 = new int[size - 1];
	for (int i = 0; i < size - 1; i++) {
		*(arr1 + i) = *(arr + i + 1)- *(arr + i) ;
	}
	cout << "New Array is " << endl;
	for (int i = 0; i < size-1; i++) {
		cout << *(arr1 + i);
	}
}
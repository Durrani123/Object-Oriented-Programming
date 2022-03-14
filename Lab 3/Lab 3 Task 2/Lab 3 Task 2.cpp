#include<iostream>
using namespace std;
int main() {
	int size;
	cout << "Enter size " << endl;
	cin >> size;
	cout << "Enter Array elements " << endl;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
	int largest = -300;
	int slargest=0;
	for (int i = 0; i < size; i++) {
		if (largest < arr[i]) {
			largest = arr[i];
		}
	}
	for (int i = 0; i < size; i++) {
		if (arr[i]>=slargest && arr[i]<largest) {
			slargest = arr[i];
		}
	}
	cout << "Second Largest is " << slargest << endl;

	int min = arr[0];
	int smin = largest;
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	for (int i = 0; i < size; i++) {
		if (arr[i] <= smin && arr[i] > min) {
			smin = arr[i];
		}
	}
	cout <<"Second Lowest is " << smin;
}
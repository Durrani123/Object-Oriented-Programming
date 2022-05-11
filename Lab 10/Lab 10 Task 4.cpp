#include<iostream>
using namespace std;
void change(int *a){
	cout<< *a * 10;
}
int main() {
	const int a = 10;
	change(const_cast<int*>(&a));
	//cout << a << endl;
}
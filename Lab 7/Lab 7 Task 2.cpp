#include<iostream>
using namespace std;
class matrixType {
	int rows;
	int column;
public:
	int** ary = new int* [rows];
	matrixType(int a,int b) {
		rows = a;
		column = b;
		for (int i = 0; i < rows; ++i) {
			ary[i] = new int[column];
		}
	}
	void setter() {
		cout << "Enter Elements" << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < column; j++) {
				cin >> ary[i][j];
			}
		}
	}
	matrixType operator+(matrixType& a) {
		if (rows == a.rows && column == a.column) {
			matrixType temp(rows, column);
			for (int i = 0; i < column; i++) {
				for (int j = 0; j < rows; j++) {
					temp.ary[i][j] = ary[i][j] + a.ary[i][j];
				}
			}
			return temp;
		}
		else {
			cout << "Can not add. Invalid !" << endl;
		}

	}
	matrixType operator-(matrixType& a) {
		if (rows == a.rows && column == a.column) {
			matrixType temp(rows, column);
			for (int i = 0; i < column; i++) {
				for (int j = 0; j < rows; j++) {
					temp.ary[i][j] = ary[i][j] - a.ary[i][j];
				}
			}
			return temp;
		}
		else {
			cout << "Can not subtract .Invalid !" << endl;
		}
	}
	matrixType operator*(matrixType& a) {
		if (column == a.rows) {
			matrixType temp(rows, a.column);
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < a.column; j++) {
					temp.ary[i][j] = 0;
					for (int k = 0; k < column; k++) {
						temp.ary[i][j] += ary[i][k] * a.ary[k][j];
					}
				}
			}
			return temp;
		}
		else {
			cout << "Can not multiply. Invalid !" << endl;
		}
	}
	friend ostream& operator<<(ostream&, matrixType&);
	matrixType() {}
};
ostream& operator<<(ostream& output, matrixType& ab) {
	for (int i = 0; i < ab.rows; i++) {
		for (int j = 0; j < ab.column; j++) {
			output << ab.ary[i][j] << " ";
		}
		output << endl;
	}
	return output;
};
int main() {

	int rows, column,rows1,column1;
	cout << "Enter Rows of 1st matrix ";
	cin >> rows;
	cout << "Enter column of 1st matrix ";
	cin >> column;
	matrixType abc(rows, column);
	abc.setter();

	
	cout << "Enter Rows of 2nd matrix ";
	cin >> rows1;
	cout << "Enter column of 2nd matrix ";
	cin >> column1;
	matrixType abcd(rows1, column1);
	abcd.setter();

	matrixType abcde;

	abcde = abc + abcd;
	cout << "After addition " << endl << abcde << endl;
	abcde = abc - abcd;
	cout << "After subtraction " << endl << abcde << endl;
	abcde = abc * abcd;
	cout << "After multiplication " << endl << abcde << endl;
}
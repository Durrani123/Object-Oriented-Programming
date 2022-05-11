#include <iostream>
#include<string>
using namespace std;

class codinator;
class person {

	string comp_uni;
public:
	friend class codinator;
};

class codinator {
	
public:
	void setter(person a,person b) {
		cout << "Enter competition and university name"<<endl;
		getline(cin, a.comp_uni);
		cout << "Enter competition and university name" << endl;
		getline(cin, b.comp_uni);

		int i = 0, j = 0, count = 0;
		for (i; a.comp_uni[i] != ' '; i++) {

		}
		for (j; b.comp_uni[j] != ' '; j++) {

		}
		int x = ++i;
		int y = ++j;
		int large = i;
		if (j > i) {
			large = j;
		}
		if (i > j) {
			while (b.comp_uni[y] != '\0') {
				if (a.comp_uni[x] != b.comp_uni[y]) {
					count++;
				}
				x++;
				y++;
			}
		}
		else {
			while (a.comp_uni[y] != '\0') {   
				if (a.comp_uni[x] != b.comp_uni[y]) {
					count++;
				}
				x++;
				y++;
			}
		}
		if (count == 0) {
			cout << "Message from the codinator Person1 and Person2 are roommates and room number is " << --large;
		}
		else {
			cout << "Message from the codinator Person1 and Person2 are not roommmates";
		}
	}
};

int main() {
	codinator d;
	person c, b;
	d.setter(c, b);

}
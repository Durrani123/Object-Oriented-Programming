#include <iostream>
using namespace std;
class family {
protected:
	string name;
	string eye;
	string hair;
	string color;
public:
	virtual void setter() = 0;
	virtual string get_name() = 0;
	virtual string get_eye() = 0;
	virtual string get_hair() = 0;
	virtual string get_color() = 0;
	family() {}
	~family(){}
};

//virtual inheritence,to avoid ambiguity in case of multiple inheritence in Mymother,father derived class

class Myfather:virtual public family {
public:
	Myfather(){}
	~Myfather(){}
	virtual void setter() {
		cout << "name" << endl;
		cin >> name;
		cout << "eyes" << endl;
		cin >> eye;
		cout << "hair" << endl;
		cin >> hair;
		cout << "color" << endl;
		cin >> color;
	}
	virtual string get_name(){
		return name;
	}
	virtual string get_eye() {
		return eye;
	}
	virtual string get_hair() {
		return hair;
	}
	virtual string get_color() {
		return color;
	}
};
class MyMother:virtual public family {
public:
	virtual void setter() {
		cout << "name" << endl;
		cin >> name;
		cout << "eyes" << endl;
		cin >> eye;
		cout << "hair" << endl;
		cin >> hair;
		cout << "color" << endl;
		cin >> color;
	}
	virtual string get_name() {
		return name;
	}
	virtual string get_eye() {
		return eye;
	}
	virtual string get_hair() {
		return hair;
	}
	virtual string get_color() {
		return color;
	}
};
class Myself :public Myfather {
private:
	string education;
	int age;
public:
	void setter() {
		Myfather::setter();
		cout << "Education" << endl;
		cin >> education;
		cout << "Age" << endl;
		cin >> education;
	}
	virtual string get_name() {
		return name;
	}
	virtual string get_eye() {
		return eye;
	}
	virtual string get_hair() {
		return hair;
	}
	virtual string get_color() {
		return color;
	}
	string get_education() {
		return education;
	}
	int get_age() {
		return age;
	}
};
//since Myfather and MyMother are virtual Mysister will only get single copy of same variable;
class Mysister :public Myfather,public MyMother {
private:
	string education;
	int age;
public:
	void setter() {
		Myfather::setter();
		cout << "Education" << endl;
		cin >> education;
		cout << "Age" << endl;
		cin >> age;
	}
	virtual string get_name() {
		return name;
	}
	virtual string get_eye() {
		return eye;
	}
	virtual string get_hair() {
		return hair;
	}
	virtual string get_color() {
		return color;
	}
	string get_education() {
		return education;
	}
	int get_age() {
		return age;
	}
};

int main()
{
	family* a;
	int n;
	do {
		cout << "1.  Father" << endl;
		cout << "2.  Mother" << endl;
		cout << "3.  Myself" << endl;
		cout << "4.  Sister" << endl;
		cin >> n;
		switch (n){
		case 1: {
			Myfather b;
			a = &b;
			a->setter();
			cout << "Name " << a->get_name() << endl;
			cout << "Eye " << a->get_eye() << endl;
			cout << "Hair " << a->get_hair() << endl;
			cout << "Color " << a->get_color() << endl;
			break;
		}
		case 2: {
			MyMother b;
			a = &b;
			a->setter();
			cout << "Name " << a->get_name() << endl;
			cout << "Eye " << a->get_eye() << endl;
			cout << "Hair " << a->get_hair() << endl;
			cout << "Color " << a->get_color() << endl;
			break;
		}
		case 3: {
			Myself b;
			a = &b;
			a->setter();
			cout << "Name " << a->get_name() << endl;
			cout << "Eye " << a->get_eye() << endl;
			cout << "Hair " << a->get_hair() << endl;
			cout << "Color " << a->get_color() << endl;
			cout << "Age" << b.get_age() << endl;
			cout << "Education " << b.get_education() << endl;
			break;
		}
		case 4: {
			MyMother *a;
			Mysister b;
			a = &b;
			a->setter();
			cout << "Name " << a->get_name() << endl;
			cout << "Eye " << a->get_eye() << endl;
			cout << "Hair " << a->get_hair() << endl;
			cout << "Color " << a->get_color() << endl;
			cout << "Age" << b.get_age() << endl;
			cout << "Education " << b.get_education();
			cout << endl;
			break;
		}
		}
	} while (n!=5);
}

#include<iostream>
using namespace std;
class vehicle {
public:
	int no_of_tires;
	string size;
	int no_of_seats;
	vehicle() {};
	~vehicle() {};
	virtual void set_value() = 0;
	virtual void print_value() = 0;
	virtual int get_ntires() = 0;
	virtual string get_size() = 0;
	virtual int get_nseats() = 0;
};
class car :public vehicle {
public:
	string color;
	car() {}
	~car(){}
	virtual void set_value() {
		cout << "No of tires" << endl;
		cin >> no_of_tires;
		cout << "size" << endl;
		cin >> size;
		cout << "No of Seats" << endl;
		cin >> no_of_seats;
		cout << "Color" << endl;
		cin >> color;
	}
	virtual void print_value() {
		cout << "No of tires " << no_of_tires << endl;
		cout << "Size " << size << endl;
		cout << "No of Seats " << no_of_seats << endl;
		cout << "Color " << color << endl;
	}
	virtual int get_ntires() {
		return no_of_tires;
	}
	virtual string get_size() {
		return size;
	}
	virtual int get_nseats() {
		return no_of_seats;
	}
	virtual string get_color() {
		return color;
	}
};
class vitz :public car {
public:
	string model;
	int plate_number;
	vitz() {}
	~vitz() {}
	void set_value() {
		car::set_value();
		cout << "Model" << endl;
		cin >> model;
		cout << "Plate Number" << endl;
		cin >> plate_number;
	}
	void print_value() {
		car::print_value();
		cout << "Modle " << model << endl;
		cout <<"Plate Number " << plate_number << endl;
	}
	virtual int get_ntires() {
		return car::get_ntires();
	}
	virtual string get_size() {
		return car::get_size();
	}
	virtual int get_nseats() {
		return car::get_nseats();
	}
	virtual string get_color() {
		return car::get_color();
	}
	virtual string get_model() {
		return model;
	}
};
int main() {
	vehicle* a;
	vitz b;
	car c;
	a = &b;
	a->set_value();
	a->print_value();
}

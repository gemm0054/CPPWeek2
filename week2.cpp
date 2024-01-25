
#include<iostream>

using namespace std;

namespace CST8219 {
	class Vehicle {
	private:
		int numWheels;
		int numDoors;
	public:
		Vehicle(int w, int d) {
			numWheels = w;
			numDoors = d;
			cout << "In constructor with 2 parameters" << endl;
		}
		Vehicle(int w) : Vehicle(w, 4) {
			cout << "In constructor with 1 parameters, wheels = " << w << endl;
		}
		Vehicle() : Vehicle(4) {
			cout << "In constructor with 0 parameters" << endl;
		}
		~Vehicle() {
			cout << "In destructor" << endl;
		}
	};
}

int main(int argc, char **argv)
{
	CST8219::Vehicle veh1;
	CST8219::Vehicle veh2(4);
	CST8219::Vehicle veh3(4, 2);
	cout << "Vehicle takes " << sizeof(veh1) << endl;
	cout << "Vehicle takes " << sizeof(veh2) << endl;
	cout << "Vehicle takes " << sizeof(veh3) << endl;

	int w;
	int d;
	char c = 'a';
	CST8219::Vehicle *pVehicle;
	do {
		cout << "enter number of doors" << endl;
		if (!(cin >> d) || d <= 0) {
			cout << "Enter a number greater than 0 for the doors" << endl;
			cin.clear();
			cin.ignore(256, '\n');
			continue;
		}
		cin.ignore(256, '\n');
		cout << "enter number of wheels" << endl;
		if (!(cin >> w) || w <= 0) {
			cout << "Enter a number greater than 0 for the wheels" << endl;
			cin.clear();
			cin.ignore(256, '\n');
			continue;
		}
		pVehicle = new CST8219::Vehicle(w, d);
		cout << "Enter 'q' or 'Q' to quit. Enter any other key to create another vehicle" << endl;
		cin >> c;
		cin.clear();
		cin.ignore(256, '\n');
		delete pVehicle;
	} while (c != 'q' && c != 'Q');
	return 0;
}
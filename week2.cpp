
#include<iostream>

using namespace std;

class Vehicle{ 
	private:
		int numWheels;
		int numDoors;
	public:
		Vehicle(int w, int d) {
			numWheels = w;
			numDoors = d;
			cout << "In constructor with 2 parameters" << endl;
		}
		Vehicle(int w) {
			Vehicle(w, 4);
			cout << "In constructor with 1 parameters, wheels = " << w << endl;
		}
		Vehicle() {
			Vehicle(4);
			cout << "In constructor with 0 parameters" << endl;
		}
		~Vehicle() {
			cout << "In destructor" << endl;
		}
};

int main(int argc, char **argv)
{
   cout << "Hello World!" << endl;
   return 0;
}
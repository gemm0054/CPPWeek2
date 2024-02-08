#include "Vehicle.h"
#include <iostream> 


Vehicle::Vehicle(int w, int d) {
	numWheels = w;
	numDoors = d;
}
Vehicle::Vehicle(int w) : Vehicle(w, 4) {
}
Vehicle::Vehicle() : Vehicle(4) {
}
Vehicle::~Vehicle() {
}
void Vehicle::printVehicle() {
	std::cout << "Doors: " << numDoors << " Wheeks: " << numWheels << std::endl;
}
Vehicle::Vehicle(Vehicle &copy) : Vehicle(copy.numWheels, copy.numDoors) {

}
Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy) {

}

int Vehicle::getNumWheels() {
	return numWheels;
}
void Vehicle::setNumWheels(int w) {
	numWheels = w;
}
int Vehicle::getNumDoors() {
	return numDoors;
}
void Vehicle::setNumDoors(int d) {
	numDoors = d;
}

Vehicle& Vehicle::operator=(const Vehicle &copy) {
	if (this != &copy) {
		numWheels = copy.numWheels;
		numDoors = copy.numDoors;
	}
	return *this;
}
bool Vehicle::operator==(const Vehicle &copy) {
	if (numDoors == copy.numDoors && numWheels == copy.numWheels) {
		return true;
	}
	return false;
}
bool Vehicle::operator!=(const Vehicle &copy) {
	if (numDoors != copy.numDoors && numWheels != copy.numWheels) {
		return true;
	}
	return false;
}
Vehicle Vehicle::operator++() {
	++numWheels;
	++numDoors;
	return *this;
}
Vehicle Vehicle::operator++(int) {
	Vehicle temp(*this);
	++numWheels;
	++numDoors;
	return temp;
}
Vehicle Vehicle::operator--() {
	--numWheels;
	--numDoors;
	return *this;
}
Vehicle Vehicle::operator--(int) {
	Vehicle temp(*this);
	--numWheels;
	--numDoors;
	return temp;
}
ostream& operator<<(ostream& os, const Vehicle& v) {
	os << "Wheels: " << v.numWheels << " Doors: " << v.numDoors;
	return os;
}
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
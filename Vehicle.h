#pragma once
#include<iostream>

using namespace std;

	class Vehicle {
	private:
		int numWheels;
		int numDoors;
	public:
		Vehicle(int w, int d);
		Vehicle(int w);
		Vehicle();
		~Vehicle();
		void printVehicle();
		Vehicle(Vehicle &);
		Vehicle(Vehicle *);

		int getNumWheels();
		void setNumWheels(int w);
		int getNumDoors();
		void setNumDoors(int d);
	};
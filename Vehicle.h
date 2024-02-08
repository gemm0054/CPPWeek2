#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

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

		Vehicle& operator=(const Vehicle &copy);
		bool operator==(const Vehicle& copy);
		bool operator!=(const Vehicle& copy);

		Vehicle operator++();//pre increment
		Vehicle operator++(int);//post increment
		Vehicle operator--();//pre decrement 
		Vehicle operator--(int);//post decrement

		friend ostream& operator<<(ostream& os, const Vehicle& v);
	};
#endif VEHICLE.H
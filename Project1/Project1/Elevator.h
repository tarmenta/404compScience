#include<iostream>
#include<vector>
#include"Person.h"

using namespace std;


class Elevator
{
private:
	int elevatorNumber;
	int currentFloor;
	int pendingFloor;
	bool goingUp;






public:
	Elevator() {
		elevatorNumber = 0;
		currentFloor= 0;
		pendingFloor = 0;
		goingUp = false;

	}
	Elevator(int elevatornumber, int currentfloor, bool direction)
	{
		elevatorNumber = elevatornumber;
		currentFloor = currentfloor;
		goingUp = direction;
		pendingFloor = 0; //Fix this
	}

	int getNumber()
	{
		return elevatorNumber;
	}

	int getFloor()
	{
		return currentFloor;
	}

	int getPending()
	{
		return pendingFloor;
	}

	bool getDirection()
	{
		return goingUp;
	}




};
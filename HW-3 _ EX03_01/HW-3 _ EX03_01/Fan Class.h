#include <iostream>
using namespace std;

// Creates the class that will represent teh fan
class Fan
{
public: // Makes it public

	int Speed; //This represents the fan speed
	bool ON; //Represents whether or not the fan is on or off
	double Radius; //Represents the radius of the fan blades

	Fan() //The default setting for the fan
	{
		Speed = 1; //Sets the speed
		ON = false; //The fan is off
		Radius = 5; //Sets the radius
	}

	//Thsi function converst the inputs from the user to the variables that are used in the class
	Fan(int speed, int radius)
	{
		Speed = speed;
		Radius = radius;
	}

	bool TurnOn() //Turns the fan on
	{
		ON = true;
		return ON;
	}

	bool TurnOff() //Turns the fan off
	{
		ON = false;
		return ON;
	}
};
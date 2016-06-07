#include <iostream>
using namespace std;

//PT 13/20
// Creates the class that will represent teh fan
class Fan
{
public: // Makes it public
//PT -- these should be private. -5
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
	//PT -- what will "ON" be set to? -2
	Fan(int speed, int radius)
	{
		Speed = speed;
		Radius = radius;
	}

	//These should be void functions.
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

/////////////////////////////////////////
// Aaron Meyers
// 5/29/16
// Homework 3: Objects
/////////////////////////////////////////

#include <iostream>
#include <string>
#include "Fan Class.h"
using namespace std;


int main()
{
	int Power = 0; //This variabl are used for getting user input so that it will determine whether or not to turn the fan on or off
	int Limit = 0; //Acts as the limiter for the loop below

				   //This loop will run two times: this gives the user the chance to try out both options
	while (Limit <= 2)
	{
		cout << "Do you want to turn the fan on (0) or off (1) or do nothing (3)?" << endl;
		cin >> Power; //Get input from the user

					  //Executes if the user inputs "0"
		if (Power == 0)
		{
			Fan Fan1(3, 10); //Sets predetermined speed and radius values
			cout << "is the fan on?" << Fan1.TurnOn() << endl; //Executes the "TurnOn" function

		    //Outputs the fan speed and the fan blades radius
			cout << "The fan speed is " << Fan1.Speed << " and the fan blade radius is " << Fan1.Radius << ".\n" << endl;

			Limit++; //Reduces the loop limiter variable
		}

		//Executes if the user inputs "0"
		else if (Power == 2)
		{
			Fan Fan2(2, 5); //Sets predetermined speed and radius values
			cout << "Is the fan on? " << Fan2.TurnOff() << endl; //Executes the "TurnOff" function

			//Outputs the fan speed and the fan blades radius
			cout << "The fan speed is " << Fan2.Speed << " and the fan blade radius is " << Fan2.Radius << ".\n" << endl;

			Limit++; //Reduces the loop limiter variable
		}
	}

	cout << "You have gone through both of the settings for the fan." << endl;

	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

//Creates a class that represents the Qradratic Equation
class Qradratic
{
private: //Makes the following information private

	int a; // This variable is for one of the numbers that are used in the equation
	int b; // This variable is for one of the numbers that are used in the equation
	int c; // This variable is for one of the numbers that are used in the equation
	
public: //Makes teh following information public

	double FirstRoot; // This variable represents of the of root of the equation
	double SecondRoot; // This variable represents of the of root of the equation


	void Inputs(int, int, int); // Gets inputs from the user
	int getREVERSEB(); // Reverses the input "b"
	int getDIVISOR(); //Computes the Divisor
	double getDISCRIMINANT(); //Computes teh discriminant
	int getA(); //Outputs the value of "a"
	int getB(); //Outputs the value of "b"
	int getC(); //Outputs the value of "c"
	void Equation(); //Execution of the full equation
	double DisplayOneRoot(); //Displays one root that was obtained from the equation
	double DisplayBothRoots(); //Displays both roots that were obtained from the equation
};
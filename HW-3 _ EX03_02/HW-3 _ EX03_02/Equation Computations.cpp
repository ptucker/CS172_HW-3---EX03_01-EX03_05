#include "Quadratic Equation.h"


// This function is responsible for getting input from the user and computing teh different components of the equation
void Qradratic::Inputs(int NewA, int NewB, int NewC)
{
	//Tranfers the values of the variables that contain the user's input to the class variables 
	a = NewA;
	b = NewB;
	c = NewC;
}

//Outputs the value of "a"
int Qradratic::getA()
{
	return a;
}

//Outputs the value of "b"
int Qradratic::getB()
{
	return b;
}

//Outputs the value of "c"
int Qradratic::getC()
{
	return c;
}

//This function reverses the value of variable "b"
int Qradratic::getREVERSEB()
{
	return (b *= -1);
}

// This function computes the divisor using variable "a" 
int Qradratic::getDIVISOR()
{
	return (2 * a); //Computes the divisor using variable "a"
}

// This function computes the discriminant
double Qradratic::getDISCRIMINANT()
{
	return ((pow(b, 2)) - (4 * a * c)); //Computes the discriminant
}

//This function combines all of the components together to form the complete Qradratic Equation and computes the roots from the equation
void Qradratic::Equation()
{
	Qradratic Q3;
	FirstRoot = ((Q3.getREVERSEB() + (sqrt(Q3.getDISCRIMINANT()))) / Q3.getDIVISOR()); //Computes the first root
	SecondRoot = ((Q3.getREVERSEB() - (sqrt(Q3.getDISCRIMINANT()))) / Q3.getDIVISOR()); //Computes the second root
}

//Outputs both roots that were obtained from the Qradratic Equation
double Qradratic::DisplayBothRoots()
{
	return FirstRoot, SecondRoot; //Outputs the values of the two roots
}

//Outputs one root that was obtained from the Qradratic Equation
double Qradratic::DisplayOneRoot()
{
	return FirstRoot; //Outputs the value of only one root
}
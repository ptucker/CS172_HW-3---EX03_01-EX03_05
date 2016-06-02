////////////////////////////////////
// Aaron Meyers
// 5/29/16
// Homework 3: EX03_02
///////////////////////////////////

#include <iostream>
#include <cmath>
#include "Quadratic Equation.h"
using namespace std;


int main()
{
	// These variables are for user input 
	int NewA, NewB, NewC = 0;
	cout << "This program will put numbers that you enter in a qradratic formula and test to see if your equation has any roots.\n" << endl;

	cout << "Input 3 numbers. " << endl;
	cin >> NewA >> NewB >> NewC; //Get data from the user

	Qradratic Q1;
	Q1.Inputs(NewA, NewB, NewC); // Calls function that will transfer the values of the user input to class variables
	cout << "\nYour numbers are: a= " << Q1.getA() << ", b= " << Q1.getB() << ", and c= " << Q1.getC()<< "." << endl; //Outputs the numbers that the user had inputted

	//Outputs the process of the equation with the values of the different components that make up the equation
	cout << "\nThe Qradratic formula executes as follows:  " << Q1.getREVERSEB() << " +/- the sqaure-root of " << Q1.getDISCRIMINANT()
		<< " then divided by " << Q1.getDIVISOR() << "." << endl;

	//Executes if the discriminant is positve
	if (Q1.getDISCRIMINANT() > 0)
	{
		Q1.DisplayBothRoots(); //Displays two roots obtained from the qradratic formula
	}

	//Executes if the discriminant is eqaul to zero
	else if (Q1.getDISCRIMINANT() == 0)
	{
		Q1.DisplayOneRoot(); //Displays one root obtained from the qradratic formula
	}

	//Executes if the discriminant is negative
	else if (Q1.getDISCRIMINANT() < 0)
	{
		cout << "There are no real roots." << endl; //No output is displayed
	}

	return 0;
}
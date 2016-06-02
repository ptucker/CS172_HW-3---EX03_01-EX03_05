///////////////////////////////////////
// Aaron Meyers
// 5/30/16
// Homework 3: EX03_05
/////////////////////////////////////

#include <iostream>
#include <sstream>
#include "My Integer Class.h"
using namespace std;

int main()
{
	int Choice = 0; //Declares a variable for user input
	string WORD = ""; //Declares an empthy string for user input

	cout << "Input a number." << endl;
	cin >> Choice; //Gets input from the user
	cout << "Input a word." << endl;
	cin >> WORD; //Gets input from the user


	MyInteger M1(Choice);

	cout << "you entered: " << M1.getValue() << endl; //Shows the user the number that they have inputted

	cout << "\t is it even? " << M1.isEven() << endl; //Outputs whether or not the number that the user inputted is even
	cout << "\t is it odd?" << M1.isOdd() << endl; //Outputs whether or not the number that the user inputted is odd
	cout << "\t is it prime?" << M1.isPrime() << endl; //Outputs whether or not the number that the user inputted is prime

	cout << "is it even?" << MyInteger::isEven(Choice) << endl; //Outputs whether or not the number that the user inputted is even
	cout << "is it odd?" << MyInteger::isOdd(Choice) << endl; //Outputs whether or not the number that the user inputted is odd
	cout << "is it prime?" << MyInteger::isPrime(Choice) << endl; //Outputs whether or not the number that the user inputted is prime

	cout << "\t is it even?" << MyInteger::isEven(M1) << endl; //Outputs whether or not the number that the user inputted is even
	cout << "\t is it odd?" << MyInteger::isOdd(M1) << endl; //Outputs whether or not the number that the user inputted is odd
	cout << "\t is it prime?" << MyInteger::isPrime(M1) << endl; //Outputs whether or not the number that the user inputted is prime


	cout << "is it equal?" << M1.equals(Choice) << endl; //Outputs whether or not the number that the user inputted is equal to that of "Value"
	cout << "is it equal?" << M1.equals(M1) << endl; //Outputs whether or not the number that the user inputted is equal to that of "Value"

	cout << "\t string to integer: " << MyInteger::parseInt(WORD) << endl; //Outputs a string via outputting the integer that the string was converted to in the function

	return 0;
}
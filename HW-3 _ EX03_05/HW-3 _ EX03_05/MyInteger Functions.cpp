#include <iostream>
#include "My Integer Class.h"
using namespace std;

//This gets input from the user
MyInteger::MyInteger(int x)
{
	Value = x; //Transfers the value to "x" to "Value"
}

//This function shows the user the value that they have inputted
int MyInteger::getValue() const
{
	return Value; //Outputs "Value" to the user
}

//This function test whether or not the value that the user inputted is an even number
bool MyInteger::isEven() const
{
	return Value % 2 == 0; //Outputs the boolian value
}

//This function tests whether or not the value that the user inputted is odd
bool MyInteger::isOdd() const
{
	return Value % 2 != 0; //Outputs the boolian value
}

//This function tests whether or not the value that the user inputted is a prime number
bool MyInteger::isPrime() const
{
	bool prime = true; //Assumes that the "Value" is prime

	//This loop will test to see if "Value" is evenly divisable by numbers between 2 and (Value/2)
	for (int i = 2; i < Value/2; i++)
	{
		if (Value % i == 0) //If "Value" is evenly divisable by a number, "prime" will return false
			prime = false;
	}
	return prime; //Outputs the boolian value
}

//This function will output that the value of "x" is equal to the value of "Value"
const bool MyInteger::equals(const int x)
{
	return x == Value; //Return the boolian value that shows that "x" and "Value" are equal to each other
}

//This function will output that the value of "x" is equal to the value of "Value"
const bool MyInteger::equals(const MyInteger& x)
{
	return x.getValue() == Value; //Return the boolian value that shows that "x" and "Value" are equal to each other
}
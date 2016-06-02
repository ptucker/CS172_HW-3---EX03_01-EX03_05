#include <iostream>
#include <sstream>
using namespace std;

class MyInteger
{
public:

	int Value; //Variable for the value that the user inputs

	MyInteger(int x); //Contains the default "Value"
	int getValue() const; // Shows the user the value that they have inputted
	bool isEven() const; //Shows whether or not "Value" is even
	bool isOdd() const; //Shows whether or not "Value" is odd
	bool isPrime() const; //Shows whether or not "Value" is prime
	int stringWORD; //A integer that will equal a word contained in a string
	string WORD; //A string variable that will hold a word

	//A static function that will display whether or not "Value" is an even number
	static bool MyInteger::isEven(int x)
	{
		return x % 2 == 0; //Outputs the boolian vaule
	}

	//A static function that will display whether or not "Value" is an odd number
	static bool MyInteger::isOdd(int x)
	{
		return x % 2 != 0; //Outputs the boolian value
	}

	//A static function that will display whether or not "Value" is a prime number
	static bool MyInteger::isPrime(int x)
	{
		bool prime = true; //Assumes that the number is prime by default

		//This loop will test to see if "Value" is evenly divisable by numbers between 2 and (Value/2)
		for (int i = 2; i < x / 2; i++)
		{
			if (x % i == 0) //If "Value" is evenly divisable by a number, "prime" will return false
				prime = false;
		}
		return prime; //Outputs the boolian value
	}

	//A static function that will display whether or not "Value" is an even number
	static bool MyInteger::isEven(MyInteger& x)
	{
		return x.isEven(); //Outputs the boolian value
	}

	//A static function that will display whether or not "Value" is an odd number
	static bool MyInteger::isOdd(MyInteger& x)
	{
		return x.isOdd(); //Outputs the boolian value
	}

	//A static function that will display whether or not "Value" is a prime number
	static bool MyInteger::isPrime(MyInteger& x)
	{
		return x.isPrime(); //Outputs the boolian value
	}

	const bool equals(const int x); //This function will output that the value of "x" is equal to the value of "Value"
	const bool equals(const MyInteger& Value); //This function will output that the value of "x" is equal to the value of "Value"

	static int parseInt(const string& s) //This function will convert a string into an integer
	{
		return atoi(s.c_str()); //COnverts string to value
	}
};

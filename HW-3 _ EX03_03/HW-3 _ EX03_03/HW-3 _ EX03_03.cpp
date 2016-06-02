////////////////////////////////////
// Aaron Meyers
// 5/29/16
// Homework 3: EX03_03
////////////////////////////////////

#include <iostream>
#include "EvenNumber Class.h"
using namespace std;

int main()
{
	int Number = 0;

	EvenNumber EV1;

	cout << "Input an even number." << endl;
	cin >> Number; //Get input from the user

				   //This loop test the input from the user to make sure that they input an even number instead of an odd number
	while (Number % 2 != 0)
	{
		cout << "That is an odd number. Input another number." << endl;
		cin >> Number; //Get input from the user
	}

	EV1.getSpecificValue(Number);

	cout << "The even number that you have is " << EV1.getEvenNumber() << endl;

	//Outputs the next even number
	cout << "The next even number is " << EV1.getNext() << "." << endl;

	//Outputs the preivous even number
	cout << "The previous even number is " << EV1.getPrevious() << "." << endl;

	return 0;
}
#include <iostream>
using namespace std;

//Sets up the class
class EvenNumber
{
private: //Makes the following information private
	int evenNumber; // This variable is for the even number that the user inputs

public: //Makes the following information public

	int NextEvenNumber; // This variable represents the even number that is after the current one
	int PreviousEvenNumber; // This variable represents the even number that is before the current one


	int getSpecificValue(int); // This gets input from the user
	int getEvenNumber(); //returns the value of "evenNumber"
	int getNext(); // This gets the next even number
	int getPrevious(); // This gets the preivous even number

};
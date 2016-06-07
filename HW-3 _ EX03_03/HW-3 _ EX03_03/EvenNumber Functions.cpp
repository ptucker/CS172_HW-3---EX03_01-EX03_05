#include <iostream>
#include "EvenNumber Class.h"
using namespace std;


//PT -- constructors? -4
//PT -- Need to check that the number is even first. -1
//This function gets input from the user and will act as the "evenNumber" variable
int EvenNumber::getSpecificValue(int Number)
{
	evenNumber = Number; //Svaes the input from the user to teh "evenNumber" variable

	return evenNumber;
}

int EvenNumber::getEvenNumber()
{
	return evenNumber;
}

//This function gets the next even number after the current number
int EvenNumber::getNext()
{
	return (evenNumber + 2); //Computes the next even number;
}

//This function gets the preivous even number before the current number
int EvenNumber::getPrevious()
{
	return (evenNumber - 2); //Computes the preivous even number
}

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

//Sets up the class
class SortStringWord
{
public: //Makes the following information public

	string Word; //This variable represents the word that the user inputs 
	int SIZE; //This is the size of the string for the word that the user inputs
	string Letter; //This represents a single letter derived from "Word"
	string FinalWord;

	void StringWord(); //Contains the default word 
	string ChooseStringWord(string); //Gets a word from the user
	string getWord(); //Displays the word that the user inputted
	void sort(string& word); //Mixes the word that the user inputs
	string getFinalSortedWord(); //Outputs the word after it has been scrambled
};

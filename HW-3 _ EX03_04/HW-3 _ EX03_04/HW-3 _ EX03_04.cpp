///////////////////////////////
// Aaron Meyers
// 5/29/16
// Homework 3: EX03_04
////////////////////////////////

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Sort Characters in String Class.h"
using namespace std;

int main()
{
	int Choice = 0; //Variable for user input
	string TestWord;

	cout << "Do you want the default word (1) or do you want to type in your own (2)?" << endl;
	cin >> Choice; //Get input from the user

	SortStringWord S1;
	
	//Executes if the user inputs "1"
	if (Choice == 1)
	{
		cout << "the default word is ";
		S1.StringWord(); //Uses the default word

		cout << "\n" << endl;

		S1.sort(S1.getWord()); //Mixes up the letters in the word
		cout << "The sorted word is " << S1.getFinalSortedWord() << endl;
	}

	//Executes of the user inputs "2"
	else
	{
		string WordInput = "";
		cout << "Enter a word." << endl;
		cin >> WordInput;

		S1.ChooseStringWord(WordInput); //Gets a word from the user
		cout << endl;

		cout << "The word that you inputted is " << S1.getWord() << "." << endl; //Outputs the word that the user inputted

		cout << "\n" << endl;

		S1.sort(WordInput); //Mixes up the letters in the word
		cout << "The sorted word is " << S1.getFinalSortedWord() << endl;
	}

	return 0;
}
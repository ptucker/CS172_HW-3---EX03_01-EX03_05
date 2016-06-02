#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Sort Characters in String Class.h"
using namespace std;

//This function contains the default word 
void SortStringWord::StringWord()
{
	Word = "silent"; //The defaalt word
}

//Gets a unique word from the user
string SortStringWord::ChooseStringWord(string WordInput)
{
	Word = WordInput;

	return Word;
}

//This function outputs the word that the user had chosen
string SortStringWord::getWord()
{
	return Word;
}

//Thsi function sorts different letters of the word around to different placements
void SortStringWord::sort(string& word)
{
	string SortedWord(word);
	SIZE = SortedWord.size(); //Gets the size of the word and saves it to "SIZE"

	//These variables contain the previous values of "x" and "y" to insure that tehy are not used again
	int PreX = -1; 
	int PreY = -2;

	cout << endl; //Outputs an empty line

	srand(time(NULL));

	for (int Limit = 1; Limit >= 0; Limit--)
	{
		int x = rand() % (SIZE); //Randomizes x with a max value based on the size of "Word"
		int y = rand() % (SIZE); //Randomizes y with a max value based on the size of "Word"


		//Executes to ensure that a different letter is selected every time that the for-loop executes
		while (y == 0 || y == PreY || y == PreX || PreX == x || x == y)
		{
			//Randomizes x and y with a the max value based on the size of "Word"
			x = rand() % (SIZE);
			y = rand() % (SIZE);
		}
		
		string SortLetter(Word);
		Letter = SortLetter.assign(Word, y, 1); //Assigns a letter from "Word" to "Letter" based on the value of y
		SortedWord.erase(y, 1); //Erases the letter that has been saved in "Letter"
		
		//cout << "letter is " << Letter << endl;;

		//Inserts the letter that is stored in "Letter" back into "Word" based on the value of x
		SortedWord.insert(x, Letter);

		PreX = y; //Saves the value of x so that it will not be used again
		PreY = x; //Saves the value of y so that it will not be used again
	}

	//Outputs the sorted word back to the user.
	FinalWord = SortedWord;

	return;
}

string SortStringWord::getFinalSortedWord()
{
	return FinalWord;
}
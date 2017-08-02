/**********************************
 ** Program Filename:  numGuess.cpp
 ** Author:  Reuben Youngblom
 ** Date: October 12th 2016
 ** Description:  program takes master number, that other user will try to guess.  Once it has master number, it compares "guesses" 
 to this master number with the < and > operators, telling guesser if they are too high or low.  Each guess
 is done in a loop, and the loop iterations are added to a counter, which then tells the user how many
 guesses it took for them to get the number correct.
 ** Input: User1 sets number to guess
 ** Output: As user 2 guesses, programs tells user if guesses are too high or too low,
 and tells user how many guesses it took for them to guess once they get it
 **********************************/

#include <iostream>
using namespace std;

int main ()  //main function
{

int masterNum;   //variable to store user input that other user will guess
int guessNum;    //stores current guess by second user
int counter=1;  //counts number of guesses that it takes

cout << "Enter the number for player to guess" << endl;   //prompt to enter number (master)

cin >> masterNum;   //takes input and sets to masterNum

cout << "Enter your guess:" << endl;   //prompts user two for their first guess

cin >> guessNum;  //stores user's first guess as guessNum

while (guessNum != masterNum)   //while loop. Keeps looping as long as user guess does not equal masterNum
{
	counter++;   //keeps track of number of guesses

	if (guessNum > masterNum)   // condition for if guess is too high 
	{
		cout << "Too high—try again!" << endl;  //output if guess is too high. promots user for new guess
	}


	else   //condition for if guess it NOT too high (i.e. if it's too low)
	{
		 cout << "Too low—try again!"<< endl;   //output for if guess is too low
	}

	cin >> guessNum;  //overwrites new guess in variable guessNum
}

if (counter == 1)   //if user 2 guesses it on their first try
	{
	cout << "Wow! You guessed it on your first try!" << endl;  //output if only one guess is needed
	}

else   //condition for if two or more guesses are needed
	{
	cout << "You guessed it in " << counter <<  " tries!" <<  endl;  //tells user how many guesses it took by printing "counter" if more than 1 try
	}

return 0;
}

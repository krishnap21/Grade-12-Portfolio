//HANGMAN - This program plays a two player hangman game where one player types in a word and then the other player will the letters within the word.
//          If the player guesses a wrong letter that isn't apart pf the hidden word, a feature of the hangman gets drawn, if the user guesses the 
//          letter correctly, the position where the letter is within the word is revealed. This process continues until either the user guesess the
//          word correctly or can't guess the word and all the features on the hangman have been drawn. At the end of the program, it tells the user
//          what the word was and if the guesses correctly or not and then the program asks the user if they wanted to play again
// Krishna Patel - Computer Science 40s
// September. 20 2022

// Constant
const int MAXLETTERS = 10;

// Prototypes
void get_answer(char answer[MAXLETTERS]);   // gets the hidden word that player 1 inputes
void draw_picture(int &num_wrong);          // draws the hangman everytime player 2 guesses an incorrect letter
bool find_letter(char &letter, char answer[MAXLETTERS]);    // returns true if the letter that player 2 guessed is in the hidden word that player 1 inputted
                                                            // or false if its not
void reveal_letters(char &letter, char answer[MAXLETTERS], bool visible[MAXLETTERS]); // this function reveals the position of the letter
                                                                                                     // guessed since it's in the hidden word

#include <iostream>
#include "MACcolors.h"
using namespace std;
int main(void)
{

	char answer[MAXLETTERS];           // The hidden word that player 1 inputs
	char used[20];                     // Is the letter that player 2 guessed already been guessed before
	bool letterisused;                 // True if the letter that player 2 inputted has been used
	int num_wrong;                     // Number of letters the player guessed wrong
	char letter;                       // The letter that player 2 guesses
	char guess;                        // Identifer used to call find_letter function
	bool visible[MAXLETTERS];          // Tells whether each letter that player 2 guessed is visible or not
	int x;                             // Loop counter
	int i;                             // Loop counter
	int a;                             // Loop counter 
	int count;                         // Puts the letter that the player inputted into a open spot in the used array
	int howmany;
	int win;                           // Used to see if the user won or not
	char playagain;                    // Used to see if the user wants to play the game again

	// Initialize values
	num_wrong = 0;
	count = 0;
	win = 0;
	howmany = 0;

	// Welcome the user
	cout << "WELCOME TO HANGMAN - LETS GET STARTED!" << endl;

	do
	{
		cout << RESET;
		cout << endl;
		// Get the hidden word from player 1
		get_answer(answer);

		// Loop through the hidden word setting the letters in the word to false and the letters that player 2 will guess to false
		for (x = 0; x < strlen(answer); x++)
		{
			visible[x] = false;
			used[x] = false;
		} // for

		do
		{

			cout << endl;
			// Get player 2's guess
			cout << "Enter a letter to guess:";
			cin >> letter;
			letter = toupper(letter);

			// Initialize
			letterisused = false;

			// If the letter has been guessed before set letterisused to true
			for (int b = 0; b < count; b++)
			{
				if (used[b] == letter)
				{
					letterisused = true;
				} // if
			} // for 

			// The player already guessed that letter so they can't guess again
			if (letterisused)
			{
				cout << "You already used " << letter << endl;
			} // if
			else
			{ // The player didn't guess this letter yet so see if it's in the word or not
				guess = find_letter(letter, answer);

				// Put the letter into a open spot in the used array
				used[count] = letter;
				// Update count to 1 more
				count++;

				// Loop through the answer to see if the letter guessed is in the answer
				for (int k = 0; k < strlen(answer); k++)
				{
					// if the letter is in the word, the user is 1 letter closer to winning so update win
					if (answer[k] == letter)
					{
						win++;
					} // if
				} // for

				// The letter was found in the word so reveal the position of that letter
				if (guess == true)
				{
					// reveal position of that letter in the word
					reveal_letters(letter, answer, visible);
					cout << endl;
				} // if
				else
				{ // that letter is not within the hidden word so tell the player
					cout << "The letter " << letter << " doesn't exist in the word " << endl;
					// The player guessed a wrong letter so update the number of wrong letters the player guessed 
					num_wrong++;
					// Since the user guessed a wrong letter, draw another feature on the hangman
					draw_picture(num_wrong);
				} // else

				// blank condition to print out the letters the user has already used 
				if (win == strlen(answer))
				{

				} // if
				else
				{ // print out all the letters the user has already guessed
					cout << "LETTERS USED: ";
					for (int z = 0; z < count; z++)
					{
						cout << used[z] << " ";
					} // for
				} // else
			} // else

		// keep doing this until the user guessed 9 wrong letters or the user guesses the hidden word
		} // do
		while (num_wrong != 9 && win != strlen(answer));

		// if the user guessed the hidden word
		if (win == strlen(answer))
		{ // Tell the user they won
			cout << "YOU GOT IT!! The word was " << answer << endl;
		}
		// Ask the user if they want to play the game again
		cout << "Do you want to play again (Y/N)?";
		playagain = toupper(_getwche());

		// Validate that the user enters yes or no
		while (playagain != 'Y' && playagain != 'N')
		{
			cout << "INVALID - please pick Y or N - Do you want to play again (Y/N)?";
			playagain = toupper(_getwche());
		} // while
		// clear the buffer
		cin.ignore();
	} // do
	while (playagain == 'Y');

	return 0;
	// Main Program
}
// get_answer - this function gets the hidden word from player 1
// answer - The hidden word that player 1 inputs
void get_answer(char answer[MAXLETTERS])
{
	int pos; // Loop Counter

	
	// Ask the player 1 for the word
	cout << "Enter the answer word";
	// Make the word not visible by printing it out in a color thats the same as the background
	cout << CYAN << B_CYAN;
	cin.getline(answer, MAXLETTERS, '\n');

	// Loop through the word that the player inputted making it uppercase
	for (pos = 0; pos < strlen(answer); pos++)
	{
		answer[pos] = toupper(answer[pos]);
	} // for

	// Reset the color
	cout << RESET;

} // get_answer

// find_letter - this function returns true if the letter that player 2 guessed is in the hidden word that player 1 inputted or false if its not
// letter - the letter that player 2 guessed is in the hidden word
// answer - the hidden word that player 1 inputted
bool find_letter(char &letter, char answer[MAXLETTERS])
{
	int i; // loop counter

	// loop through the hidden word to see if the letter that player 2 guessed is in the word
	for (i = 0; i < strlen(answer); i++)
	{
		if (answer[i] == letter)
		{ // The letter is in the word so return true
			return true;
		} // if
	} // for
	// The letter isn't inside the word so return false
	return false;
	
} // find_letter

// reveal_letters - this funtion reveals the position of the letter that is guessed because it is in the hidden word
// letter the letter that player 2 guessed is in the hidden word
// answer - the hidden word that player 1 inputted
// visible - tells whether each letter that player 2 guessed is visible or not
void reveal_letters(char& letter, char answer[MAXLETTERS], bool visible[MAXLETTERS])
{
	int i; // loop counter
	int x; // counter

	// loop through the hidden word making the letter that the player guessed correctly visible by setting it to true
	for (x = 0; x < strlen(answer); x++)
	{
		if (answer[x] == letter)
		{
			visible[x] = true;
		} // if
	} // for

	// loop through the hidden word revealing only the visible letters and leaving the other letters that the user
	// has not yet guessed as a blank 
	for (i = 0; i < strlen(answer); i++)
	{// if the letter is visble, print it out
		if (visible[i] == true)
		{
			cout << answer[i];
		} // if
		else
		{ // the letter is not visble / has not been guessed yet so indicate that with a - sign
			cout << "_ ";
		} // else
	} // for

	
} // reveal_letters

// draw_picture - this function draws the hangman everytime player 2 guesses an incorrect letter
// num_wrong - the number of wrong letters player 2 guessed
void draw_picture(int& num_wrong)
{
	// if 1 letter was guessed wrong
	if (num_wrong == 1)
	{
		cout << "|===================|" << endl;
		cout << "          |		  " << endl;
		cout << "          |		  " << endl;
		cout << "          O		  " << endl;
	} // if
	else
	{ // if 2 letters were drawn wrong
		if (num_wrong == 2)
		{
			cout << "|===================|" << endl;
			cout << "          |		  " << endl;
			cout << "          |		  " << endl;
			cout << "          O		  " << endl;
			cout << "          |		  " << endl;
		} // if
		else
		{ // if 3 letters were drawn wrong
			if (num_wrong == 3)
			{
				cout << "|===================|" << endl;
				cout << "          |		  " << endl;
				cout << "          |		  " << endl;
				cout << "          O		  " << endl;
				cout << "          |		  " << endl;
				cout << "         /		      " << endl;
				
			} // if
			else
			{ // if 4 letters were drawn wrong
				if (num_wrong == 4)
				{
					cout << "|===================|" << endl;
					cout << "          |		  " << endl;
					cout << "          |		  " << endl;
					cout << "          O		  " << endl;
					cout << "          |		  " << endl;
					cout << "         / \\	      " << endl;

				} // if
				else
				{ // if 5 letters were drawn wrong
					if (num_wrong == 5)
					{
						cout << "|===================|" << endl;
						cout << "          |		  " << endl;
						cout << "          |		  " << endl;
						cout << "          O		  " << endl;
						cout << "          |/		  " << endl;
						cout << "         / \\	      " << endl;

					} // if
					else
					{ // if 6 letters were drawn wrong
						if (num_wrong == 6)
						{
							cout << "|===================|" << endl;
							cout << "          |		  " << endl;
							cout << "          |		  " << endl;
							cout << "          O		  " << endl;
							cout << "         \\|/		  " << endl;
							cout << "         / \\	      " << endl;

						} // if
						else
						{ // if 7 letters were drawn wrong
							if (num_wrong == 7)
							{
								cout << "|===================|" << endl;
								cout << "          |		  " << endl;
								cout << "          |		  " << endl;
								cout << "         ___         " << endl;
								cout << "          O		  " << endl;
								cout << "         \\|/		  " << endl;
								cout << "         / \\	      " << endl;

							} // if
							else
							{ // if 8 letters were drawn wrong
								if (num_wrong == 8)
								{
									cout << "|===================|" << endl;
									cout << "          |		  " << endl;
									cout << "          |		  " << endl;
									cout << "        |___|         " << endl;
									cout << "          O		  " << endl;
									cout << "         \\|/		  " << endl;
									cout << "         / \\	      " << endl;

								} // if
								else
								{ // if 9 letters were drawn wrong
									if (num_wrong == 9)
									{
										cout << "|===================|" << endl;
										cout << "          |		  " << endl;
										cout << "          | 		  " << endl;
										cout << "        _____        " << endl;
										cout << "        |___|        " << endl;
										cout << "          O		  " << endl;
										cout << "         \\|/		  " << endl;
										cout << "         / \\	      " << endl;

									} // if
								} // else
							} // else
						} // else
					} // else
				} // else
			} // else
		} // else
	} // else
} // draw_picture



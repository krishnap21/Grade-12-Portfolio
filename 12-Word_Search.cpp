// Word Search - This program is a menu driven program. The rogram starts by asking the user if they want to (C)reate puzzle, (R)esume puzzle,
//               (W)rite puzzle, (P)rint puzzle, (F)ind word or (Q)uit. If the user chooses Create Puzzle, the user is able to create a puzzer with 
//               rows and columns between 1-10, the program validates that the user enters a row and column between 1-10 and then asks the user if 
//               they want to randomly generate the letters for the puzzle or manually enter the letters for each spot in the puzzle. If the user 
//               chooses Print Puzzle then the program prints the puzzle with the found words being printed in green and also prints a list of words
//               already found. With the find word function, the user is asked to enter a word and then the program runs to see if the word that the
//               user entered has been found before, if so, the program tells the user that the word has already been found. If not, then the program
//               runs to see if the word can be found horizontally forward or vertically down. If so, the function tells the user the word is found and
//               adds it to the other list of words found, if not then the user is told that the word they are searching for has not been found. 
//               The user also has the option to pick if they want to Write Puzzle, whcih will allow them to save the current puzzle and Resume Puzzle
//               which will allow the user to reload the previously save puzzle. The program will run until the user presses Quit which in that case will
//               end the program
// Krishna Patel - Computer Science 40s
// DATE - Oct.14 2022


#include<iostream>
#include<time.h>
#include"MACcolors.h"
#include<fstream>
using namespace std;

// Globals
enum status { spot_found, spot_not_found };    // The status can have a value of spot is found or spot is not found 

// A spot in the puzzle  
struct spot
{
	char letter;      // The letter in that spot 
	status spot_status;   // Tells if this spot has been found yet 
};

// The puzzle 
struct puzzle
{
	int numrows;           // # of rows in the puzzle 
	int numcolumns;        // # columns in the puzzle 
	spot entry[10][10];    // the 2-d letters & colours 
	int numwordsfound;     // how many words have been found 
	char wordlist[25][11]; // Matrix of found words - maximum of 25 
};

// Prototypes
char menu();  // This function asks the user what they want to do - (C)reate puzzle, (R)esume puzzle, (W)rite puzzle, (P)rint puzzle, (F)ind word or (Q)uit - and returns the choice
void Create_Puzzle(puzzle& mypuzzle); // this function creates a new puzzle by asking the user for the puzzle size and then giving them the option of either entering their own
// letters for the puzzle or generating random letters
void Resume_Puzzle(puzzle& mypuzzle); // resumes the previously saved puzzle by reading the previous puzzle in from a file
void Write_Puzzle(puzzle mypuzzle);   // writes the current puzzle to the file for possible retrieval later
void Print_Puzzle(puzzle& mypuzzle);  // prints the current puzzle with colors and wordlist or tells the user that they haven't enetered a puzzzle yet
void Find_Word(puzzle& mypuzzle);     // checks to ensure there is a puzzle and then asks the user what word they want to find. If the word was found it says so and if not it 
// tells the user. If the word is found, the function also adds the new word found to the word lists
bool horizontal_forward(puzzle& mypuzzle, char checkword[10]); // checks to see if checkword can be found horizontally.The function will return true/false
// depending on whether the word was found or not
bool vertical_downward(puzzle& mypuzzle, char checkword[10]);  // checks to see if checkword can be found vertically.The function will return true/false
// depending on whether the word was found or not


// Main Program
int main(void)
{

	puzzle mypuzzle;          // The whole puzzle
	char checkword[10];       // word that needs to be checked if its valid or not
	char choice;              // The users choice on what they want to do

	// Initialze rows and columns to 0
	mypuzzle.numrows = 0;
	mypuzzle.numcolumns = 0;



	do
	{
		// assign the return value of the users choice to choice
		choice = menu();
		switch (choice)
		{
			// If choice C, call create_puzzle function
		case 'C': Create_Puzzle(mypuzzle); break;
			// If choice R, call resume_puzzle function
		case 'R': Resume_Puzzle(mypuzzle); break;
			// If choice W, call write_puzzle function
		case 'W': Write_Puzzle(mypuzzle); break;
			// If choice P, call print_puzzle function
		case 'P': Print_Puzzle(mypuzzle); break;
			// If choice F, call find_puzzle function
		case 'F':  Find_Word(mypuzzle); break;

		} // switch

	} // do
	// Run the do while loop while the users choice is not to quit
	while (choice != 'Q');


	return 0;
} // Main Program

// menu - This function asks the user what they want to do - (C)reate puzzle, (R)esume puzzle, (W)rite puzzle, (P)rint puzzle, (F)ind word or (Q)uit - and returns the choice to 
//        the mainline
char menu(void)
{
	char user_choice;  // The users choice about what they want to do

	// Ask the user what they want to do
	cout << "Do you want to (C)reate puzzle, (R)esume puzzle, (W)rite puzzle, (P)rint puzzle, (F)ind word or (Q)uit";
	// Convert the users input into uppercase
	user_choice = toupper(_getwche());
	cout << endl;

	// Validate the users choice
	while (user_choice != 'C' && user_choice != 'R' && user_choice != 'W' && user_choice != 'P' && user_choice != 'F' && user_choice != 'Q')
	{   // The choice was invalid so ask the user to re-enter their choice
		cout << "INVALID CHOICE - pick (C)reate puzzle, (R)esume puzzle, (W)rite puzzle, (P)rint puzzle, (F)ind word or (Q)uit";
		// Convert the users input into uppercase
		user_choice = toupper(_getwche());
		cout << endl;
	}
	// return the user choice to the mainline
	return user_choice;

} // menu


// Create_Puzzle - this function creates a new puzzle by asking the user for the puzzle size and then giving them the option of either entering their own letters for the puzzle 
//                 or generating random letters
// mypuzzle - the puzzle holding the data
void Create_Puzzle(puzzle& mypuzzle)
{
	char choice; // the users choice on whether they want to manually enter letters for the puzzle or generate the letters randomly
	int i; // Loop counters
	int j; // Loop counters
	char letters; // assigned a random letter from a-z

	// seed the random number generator
	srand(time(NULL));

	// Ask the user to enetr the number of rows they want in their puzzle 
	cout << "Enter the number of rows in the puzzle (1-10): ";
	cin >> mypuzzle.numrows;

	// Validate that the user enters a number between 1-10 for the rows
	while (mypuzzle.numrows < 1 || mypuzzle.numrows > 10)
	{   // The user didn't enter a number from 1-10 for the rows so ask them to re-enter the number for the rows
		cout << "INVALID - you can only have 1-10 rows - please enter the number of rows in the puzzle: ";
		cin >> mypuzzle.numrows;
	} // while

	// Ask the user to enetr the number of columns they want in their puzzle 
	cout << "Enter the number of columns in the puzzle (1-10): ";
	cin >> mypuzzle.numcolumns;

	// Validate that the user eneters a number between 1-10 for the columns
	while (mypuzzle.numcolumns < 1 || mypuzzle.numcolumns > 10)
	{   // The user didn't enter a number from 1-10 for the columns so ask them to re-enter the number for the columns
		cout << "INVALID - you can only have 1-10 columns - please enter the number of columns in the puzzle: ";
		cin >> mypuzzle.numcolumns;
	} // while


	// Ask the user if they want to manually enter letters for the puzzle or generate the letters randomly
	cout << "Enter the letters manually (M) or generate random letters (R)? ";
	// Convert the users input into uppercase
	choice = toupper(_getwche());

	// if the user chooses to manually enter the letters, loop through to let them do so
	if (choice == 'M')
	{
		for (i = 0; i < mypuzzle.numrows; i++)
		{
			for (j = 0; j < mypuzzle.numcolumns; j++)
			{
				// Ask the user to enter the letter for each spot in the puzzle
				cout << "Enter the letter for row " << i + 1 << " column " << j + 1 << ": ";
				cin >> mypuzzle.entry[i][j].letter;
				// Set each letter to spot not found
				mypuzzle.entry[i][j].spot_status = spot_not_found;
			} // for
		} // for
	} // if
	else
	{   // The user chose to randomly generate the leters for the puzzle so loop through to do so
		if (choice == 'R')
		{
			for (i = 0; i < mypuzzle.numrows; i++)
			{
				for (j = 0; j < mypuzzle.numcolumns; j++)
				{
					// Assign a random letter from a-z to the identifier
					letters = 'a' + rand() % 26;
					// That spot in the puzzle is that letter now
					mypuzzle.entry[i][j].letter = letters;
					// Set each letter to spot not found
					mypuzzle.entry[i][j].spot_status = spot_not_found;
				} // for
			} // for
		} // if
	} // else

	// Initialize the number of words found to 0
	mypuzzle.numwordsfound = 0;
	cout << endl;
} // Create_Puzzle


// Print_Puzzle - prints the current puzzle with colors and wordlist or tells the user that they haven't enetered a puzzzle yet
// mypuzzle - the puzzle holding the data
void Print_Puzzle(puzzle& mypuzzle)
{
	int i; // Loop counter
	int j; // Loop counter
	int x; // Loop counter

	// if the rows or columns are 0 - a puzzle hasn't been eneterd yet
	if (mypuzzle.numrows == 0 || mypuzzle.numcolumns == 0)
	{
		// tell the user that they have not entered a puzzle yet
		cout << "You have not entered a puzzle yet." << endl;
	}
	else
	{   // print out the puzzle
		cout << "Puzzle:" << endl;
		for (i = 0; i < mypuzzle.numrows; i++)
		{
			for (j = 0; j < mypuzzle.numcolumns; j++)
			{
				// If the letter in that spot is found then print out in green 
				if (mypuzzle.entry[i][j].spot_status == spot_found)
				{
					cout << GREEN << mypuzzle.entry[i][j].letter << " ";
				} // if
				else
				{
					cout << RESET;
					// print out the letter as normal
					cout << mypuzzle.entry[i][j].letter << " ";
				} // else
			} // for
			// used to make the output look better
			cout << endl;
		} // for

		// Reset the color
		cout << RESET;

		// used to make the output look better
		cout << endl;

		// Loop through printing out the words that the users found so far
		cout << "Found words:" << endl;
		for (x = 0; x < mypuzzle.numwordsfound; x++)
		{
			cout << mypuzzle.wordlist[x] << endl;
		} // for
	} // else
} // Print_Puzzle


// Find_Word - checks to ensure there is a puzzle and then asks the user what word they want to find. If the word was found it says so and if not it tells the user. If
//             the word is found, the function also adds the new word found to the word lists
// mypuzzle - the puzzle holding the data
void Find_Word(puzzle& mypuzzle)
{
	char word[10]; // the word that the user wants to find
	bool found; // used to see if the word the user entered has already been found previously or not
	bool match;  // used to see if any words from the wordlist match with the word that the user wants to find
	int i; // Loop counter
	int j; // Loop counter
	int word_length; // the length of the word that the user entered


	// if the rows or columns are 0 - a puzzle hasn't been eneterd yet
	if (mypuzzle.numrows == 0 || mypuzzle.numcolumns == 0)
	{
		// tell the user that they have not entered a puzzle yet
		cout << "You have not entered a puzzle yet. " << endl;
	} // if
	else
	{
		// Ask the user for a word to find
		cout << "Enter the word to search for: ";
		cin >> word;

		// If the word that the user enters is less than or equal to 2 letters
		while (strlen(word) <= 2)
		{
			// Tell the user that the word is invalid
			cout << "INVALID - you must search for a bigger word" << endl;

			// Ask the user to re-enter the word they want to search for
			cout << "Enter the word to search for: ";
			cin >> word;

		} // while

		// Intialize found to false
		found = false;

		// Loop through the list of words to see if the word the user entered has already been found or not
		for (i = 0; i < mypuzzle.numwordsfound; i++)
		{
			// Initialize
			match = true;

			for (j = 0; j < strlen(word); j++)
			{
				// if the word in the word list is not equal to the word the user wants to find
				if (mypuzzle.wordlist[i][j] != word[j])
				{   // the match is false
					match = false;
					// break out of loop
					break;
				}
			}

			// if the word that the user is trying to find is in the wordlist, the word has already been found so set to true
			if (match)
			{
				found = true;

			} // if
		} // else

		// if the word the user entered has already been found before
		if (found)
		{  // tell the user that the word has already been discovered
			cout << BLUE << "This word has already been found" << endl;
			cout << RESET;

		} // if
		else
		{   // The word that the user is trying to find has no been found before so see if the word can be found 

			// if the word is found horizontally or vertically 
			if (horizontal_forward(mypuzzle, word) || vertical_downward(mypuzzle, word))
			{
				word_length = strlen(word);
				// Loop through the word 
				for (i = 0; i < word_length; i++)
				{
					//add the word to the list of found words 
					mypuzzle.wordlist[mypuzzle.numwordsfound][i] = word[i];
				}
				// Add eos character
				mypuzzle.wordlist[mypuzzle.numwordsfound][word_length] = '\0';
				// Add to the number of words found
				mypuzzle.numwordsfound++;
				// Tell the user the word has been found
				cout << GREEN << "Word found! " << endl;
				cout << RESET;
			} // if
			else
			{   // The word cant be found horzontally or verticlly so tell the user the word hasn't been found
				cout << RED << "Word not found. " << endl;
				cout << RESET;
			} // else
		} // else


	} // else

} // Find_Word

// horizontal_forward - checks to see if word that the user entered can be found horizontally.The function will return true/false depending on whether the word was found or not
// mypuzzle - the puzzle holding the data
// checkword[10] - the word that the user entered that the program needs to check if it can be found horizontally
bool horizontal_forward(puzzle& mypuzzle, char checkword[10])
{
	int rowstart; // keeps track of the current row being checked within the puzzle
	bool found;   // used to check if word is found horizontally or not
	int colstart; //  keeps track of the current column position within the current row being checked
	int pos; // Loop counter

	// Initialize values 
	rowstart = 0;
	found = false;

	// loop until found or no more rows to check
	while (!found && rowstart < mypuzzle.numrows)
	{
		// Initialize colstart to 0 
		colstart = 0;
		// loop until found or no more columns to check
		while (!found && colstart + strlen(checkword) <= mypuzzle.numcolumns)
		{
			// assume that the word is found
			found = true;
			// Loop through the word the user entered
			for (pos = 0; pos < strlen(checkword); pos++)
			{
				// if the letter in the puzzle doens't match with the letter in the word in the same position then the word is not found so found is set to false
				if (mypuzzle.entry[rowstart][colstart + pos].letter != checkword[pos])
				{
					found = false;
				} // if
			} // for

			// The word is found
			if (found)
			{
				// We found the word!
				// set to found so colours will print out right later
				// loop through the check word
				for (pos = 0; pos < strlen(checkword); pos++)
				{
					// set the corresponsing spot in the puzzle to found
					mypuzzle.entry[rowstart][colstart + pos].spot_status = spot_found;
				} // for
			} // if 
			else
			{
				// check the next column
				colstart++;
			} // else
		} // while colstart
		// move to next row
		rowstart++;
	} // while rowstart
	// The word is found so return true
	if (found)
	{
		return true;
	} // if
	else
	{ // The word is not found so return false
		return false;
	} // else
} // horizontal_forward


// vertically_downward - // checks to see if checkword can be found vertically.The function will return true/false depending on whether the word was found or not
// mypuzzle - the puzzle holding the data
// checkword[10] - the word that the user entered that the program needs to check if it can be found horizontally
bool vertical_downward(puzzle& mypuzzle, char checkword[10])
{
	int i; // Loop counter
	int j; // Loop counter
	int k; // Loop counter
	bool found; // used to check if word is found vertically or not

	// loop throughhe puzzle
	for (i = 0; i < mypuzzle.numrows; i++)
	{
		for (j = 0; j < mypuzzle.numcolumns; j++)
		{
			// The function first checks if the letter of the puzzle at the current position is the same as the first character of the word
			if (mypuzzle.entry[i][j].letter == checkword[0])
			{
				// since the first letter is the same as the current position set found to true
				found = true;
				// Loop through the given word 
				for (k = 0; k < strlen(checkword); k++)
				{
					// checks the next letter of the word at the next row and column position and compare it with the corresponding letter of the puzzle
					if (i + k >= mypuzzle.numrows || mypuzzle.entry[i + k][j].letter != checkword[k])
					{   // they are not the same so set found to false and break out the loop.
						found = false;
						break;
					} // if
				} // for
				// the word is found vertically
				if (found)
				{
					// Loop through the word
					for (k = 0; k < strlen(checkword); k++)
					{   // set the letters of the word in the puzzle to spot is found
						mypuzzle.entry[i + k][j].spot_status = spot_found;
					} // for
					// return true because the word is found
					return true;
				} // if
			} // if
		} // for
	} // for 
	// the word is not found so return false
	return false;
} // vertically_downward

// Resume_Puzzle - resumes the previously saved puzzle by reading the previous puzzle in from a file
// mypuzzle - the puzzle holding the data
void Resume_Puzzle(puzzle& mypuzzle)
{

	ifstream infile;    // File to read from
	char confirm;       // Allows the user to confirm the loading

	// Ask the user to confirm 
	cout << "This operation will delete any current data. Continue? (Y/N) ";
	// Convert the suers input to uppercase
	confirm = toupper(_getwche());
	cout << endl;

	// If yes, attempt to load file
	if (confirm == 'Y')
	{   // open file 
		infile.open("wordsearch.DAT", ios::in);
		if (infile)
			// If file opened ok, read structure and close file 
		{
			infile.read((char*)&mypuzzle, sizeof(mypuzzle));
			infile.close();
			// Print message
			cout << "Sheet has been Loaded!" << endl;
		} // if
		else
		{
			cout << "FILE ERROR! Perhaps the file does not exist!" << endl;
		} // else
	} // if confirm

} // Resume_Puzzle

// Write_Puzzle - writes the current puzzle to the file for possible retrieval later
// mypuzzle - the puzzle holding the data
void Write_Puzzle(puzzle mypuzzle)
{
	ofstream outfile;    // The file to write to

	// open file 
	outfile.open("wordsearch.DAT", ios::out);

	// Check to see if file error
	if (outfile)
	{
		// Write structure to file and then close file 
		outfile.write((char*)&mypuzzle, sizeof(mypuzzle));
		outfile.close();
		// Print message
		cout << "Sheet has been Saved! " << endl;
	} // if
	else
	{
		// File Error - give message
		cout << "FILE ERROR - You did something real bad!!! " << endl;
	} // else


} // Write_Puzzle
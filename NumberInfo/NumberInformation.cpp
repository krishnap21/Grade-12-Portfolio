// Number Information - This program asks the user how many numbers they want number information on and then the program generates
//                      that many random numbers printing out info on the numbers such as how many factors they have, the sum of the
//                      numbers digits, if the number is prime or composite, if the number is a perfect square, perfect cube, or 
//                      if the number is a perfect number. At the end of the program, after printing out the number information for
//                      all of the numbers, the program prints out statistics of the number of average factors for all the numbers,
//                      average sum of digits for all of the numbers, percentage of numbers that were prime, percentage of numbers
//                      that were composite, percentage of numbers that were perfect squares, percentage of numbers that were 
//                      perfect cubes, percentage of numbers that were perfect numbers
// Krishna Patel - Computer Science 40s
// DATE - Nov.12 2022

void seed_random();   // The random number generator


#include<iostream>
#include"numberinformationobject.h"
using namespace std;

// Main Program 
int main(void)
{
	numberinfo* mynumber;          // A single random number
	numberinfo* ptrNums[1000];     // Array of numbers 
	int howmany;                   // The number of numbers the user wants info one
	int counter;                   // Loop counter
	int pos;                       // Loop counter
	int x;                         // Loop counter
	int factor_avg;                // The number of average factors for all the numbers
	int avg_sum_digits;            // The average sum of digits for all of the numbers
	int prime_per;                 // The percentage of numbers that were prime
	int comp_per;                  // The percentage of numbers that were composite
	int per_sq;                    // The percentage of numbers that were perfect squares
	int per_cube;                  // The percentage of numbers that were perfect cubes
	int per_num;                   // The percentage of numbers that were perfect numbers

	// Initialize to 0
	factor_avg = 0;
	avg_sum_digits = 0;
	prime_per = 0;
	comp_per = 0;
	per_sq = 0;
	per_cube = 0;
	per_num = 0;

	// Seed the random number generator
	seed_random();

	// Ask the user thow many number they want information on
	cout << "How many numbers would you like to enter: ";
	cin >> howmany;

	// Loop through creating as many random numbers as numbers the user wanted
	for (counter = 0; counter < howmany; counter++)
	{
		ptrNums[counter] = new numberinfo(rand() % 998 + 2);

		// Used to make sure that all the numbers don't print out all at once
		cout << "PRESS ANY KEY TO CONTINUE";
		_getwche();
	} // for


	// Loop through all the numbers getting their info
	for (x = 0; x < howmany; x++)
	{
		ptrNums[x]->statistics(factor_avg,prime_per, comp_per, avg_sum_digits, per_sq, per_cube, per_num);
	} // for

	// Print out the percentages for all of the numbers - number of average factors for all the numbers, average sum of digits 
	// for all of the numbers, percentage of numbers that were prime, percentage of numbers that were composite, percentage of 
	// numbers that were perfect squares, percentage of numbers that were perfect cubes, percentage of numbers that were perfect 
	// numbers
	cout << "There were " << howmany << " numbers and " << 100*comp_per/howmany << "% were composite and " << 100*prime_per/howmany <<
		"% were prime. On average, the " << howmany << " numbers had an average of " << factor_avg/howmany << " factors. " << endl;

	cout << "The avg sum of the digits of all of the numbers is " << avg_sum_digits / howmany << endl;
	cout << "Out of the " << howmany << " numbers " << 100*per_sq/howmany << "% were perfect squares" << endl;
	cout << "Out of the " << howmany << " numbers " << 100*per_cube/howmany << "% were perfect cube" << endl;
	cout << "Out of the " << howmany << " numbers " << 100*per_num/howmany << "% were perfect numbers" << endl;


	// Loop through all of the random numbers to delete them
	for (pos = 0; pos < howmany; pos++)
	{
		delete ptrNums[pos];
	} // for

	return 0;
} // Main Program


// seed_random() - Seeds the random number generator
void seed_random()
{
	int i;                  // Loop counter

	// Seed the random number generator  - Use the system time
	srand((unsigned)time(NULL));
	for (i = 0; i < rand(); i++)
		rand();
} // seed_random()

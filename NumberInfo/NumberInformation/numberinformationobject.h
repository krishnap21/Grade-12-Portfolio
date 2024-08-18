// This numberinformtionobject.h contains information about a random number
#pragma once
#include <iostream>
using namespace std; 



class numberinfo
{
public:
	numberinfo(int number);                 // Constructor - calculates everything fot eh number
	~numberinfo();                          // Destructor - deletes the number
	void statistics(int& fa, int& pp, int& cp, int&sd, int& ps, int& pc, int&pn); // Wrapper function that calaulates the total and sends it to the main program



private: 
	int randomvalue;            // The random number that the number information is going to be calaulated for
	int prime;                  // The number of prime numbers there are
	int comp;                   // The number of composite numbers there are
	int x;                      // Loop counter
	int y;                      // Loop counter
	int howmany;                // How many factors the number has
	int copy;                   // Copy of the number
	int hundreds;               // The hundereds place value of the number to calulate the sum of the digits
	int tens;                   // The tens place value of the number to calulate the sum of the digits
	int ones;                   // The ones  place value of the number to calulate the sum of the digits
	int count;                  // Used to calculate if the number is a perfect square
	int count2;                 // Used to calculate if the number is a perfect cube
	bool perfect_sqaure;        // Boolean that is set to true when the number is a perfect square
	bool perfect_cube;          // Boolean that is set to true when the number is a perfect cube
	bool perfect_number;        // Boolean that is set to true when the number is a perfect number
	int sum;                    // Used to calculate if number is a perfect number
	int ps;                     // The total number of perfect sqaures
	int pc;                     // The total number of perfect cubes
	int pn;                     // The total number of perfect numbers
	int pp;                     // The total number of prime numbers 
	int cp;                     // The total number of composite numbers 
	int fa;                     // The total number of factors
	int T_HM;                   // To calculate how many factors that number has in total
	int T_HM2;                  // To calculate the sum of the digits for the number
	int sd;                     // The total sum of digits



};	// class numberinfo


// numberinfo - This method is a constructor for a number object - it calculates the information for the number
// number -  The random number generated that the number information will be displayed about
numberinfo::numberinfo(int number)
{
	// Initialize
	randomvalue = number;
	prime = 0;
	comp = 0;
	sum = 0;
	T_HM = 0;
	T_HM2 = 0;

	// If the number is divided by 2 and there is no remainder then he number is even
	if (randomvalue % 2 == 0)
	{   // Tell the user that the number is even
		cout << randomvalue << " is even and its factors are: ";
	} // if
	else
	{   // The number is odd so tell the user
		cout << randomvalue << " is odd and its factors are: ";
	} // else

	// Initialize
	howmany = 0;
	// Loop through all possible factors
	for (x = 1; x <= randomvalue; x++)
	{
		// Check if this is a factor
		if (randomvalue % x == 0)
		{
			// New factor - print and add 1 to how many
			cout << x << " ";
			howmany++;
		} // if 
	} // for
	cout << endl;
	// Print out the number of factors that the number has
	cout << randomvalue << " has " << howmany << " factors so it is ";

	// If the number of factors is 2
	if (howmany == 2)
	{   // The number is prime so tell the user and add 1 to the prime
		cout << "prime " << endl;
		prime++;
	} // if
	else
	{   // The number is composite so tell the user and add 1 to composite
		cout << "composite " << endl;
		comp++;
	} // else

	// Add how many total factors 
	T_HM += howmany;

	// Print out message for the sum of digits
	cout << "The sum of the digits of " << randomvalue << " is ";

	// Perform calculations - find each digit
	copy = randomvalue;
	hundreds = randomvalue / 100;
	copy = copy % 100;
	tens = copy / 10;
	copy = copy % 10;
	ones = copy / 1;
	copy = copy % 1;

	// Print out the sum of the digits
	cout << hundreds + tens + ones << endl;

	// The total number of sum of digits
	T_HM2 = hundreds + tens + ones;

	// Initialize 
	count = 1;

	// If count times count is less than the random value
	while (count * count < randomvalue)
	{   // Keep adding 1 to count until its equal to or above the random number
		count++;
	} // while

	// If count times count is equal to the random value 
	if (count * count == randomvalue)
	{
		// Perfect square exists so set identifer to true and tell user that the number is a perfect square 
		perfect_sqaure = true;
		cout << randomvalue << " is a perfect square" << endl;
	} // if
	else
	{   // The number is not a perfect square so set identifer to false and tell user that the number is not a perfect square 
		perfect_sqaure = false;
		cout << randomvalue << " is not a perfect square" << endl;
	} // else

	// Initialize
	count2 = 1;

	// If count times count times count is less than the random value
	while (count2 * count2 * count2 < randomvalue)
	{   // Keep adding 1 to count until its equal to or above the random number
		count2++;
	} // while

	// If count times count times count is equal to the random value 
	if (count2 * count2 * count2 == randomvalue)
	{
		// Perfect cube exists so set identifer to true and tell user that the number is a perfect cube
		perfect_cube = true;
		cout << randomvalue << " is a perfect cube" << endl;
	} // if
	else
	{   // The number is not a perfect cube so set identifer to false and tell user that the number is not a perfect cube
		perfect_cube = false;
		cout << randomvalue << " is not a perfect cube" << endl;
	} // else

	// Loop through all the numbers less than the random number
	for (y = 1; y < randomvalue; y++)
	{
		// If the number is a divisor of the random number
		if (randomvalue % y == 0)
		{
			// Add that divisor to the sum
			sum += y;
		} // if
	} // for

	// If after looping through all of the numbers less than the random number and adding the numbers that are divisors of the random number, the sum is equal to the random number
	if (sum == randomvalue)
	{   // Perfect number exists so set identifer to true and tell user that the number is a perfect number 
		perfect_number = true;
		cout << randomvalue << " is a perfect number" << endl;
	} // if 
	else
	{   // The number is not a perfect number so set identifer to false and tell user that the number is not a perfect number
		perfect_number = false;
		cout << randomvalue << " is not a perfect number" << endl;
	} // else

	cout << endl;

} // numberinfo

// ~numberinfo - his method is a destructor for a number information object - it deletes the random number
numberinfo::~numberinfo()
{

} // ~numberinfo

// statistics - This method adds up the total to send the values to the main function to calulate the statistics
// fa - The total number of factors
// pp - The total number of prime numbers
// cp - The total number of composite numbers 
// sd - The total sum of digits
// ps - The total number of perfect sqaures
// pc - The total number of perfect cubes
// pn - The total number of perfect numbers
void numberinfo::statistics(int& fa, int& pp, int& cp,int& sd, int& ps, int& pc, int& pn)
{
	// Add the total number of factors for all the numbers
	fa += T_HM;

	// Add the total number of prime numbers for all the numbers
	pp += prime;

	// Add the total number of composite numbers for all the numbers
	cp += comp;

	// Add the sum of digits for all the numbers
	sd += T_HM2;

	// If perfect square is true 
	if (perfect_sqaure == true)
	{   // Add to the total number of perfect squares for all the numbers
		ps++;
	} // if

	// If perfect cube is true 
	if (perfect_cube == true)
	{   // Add to the total number of perfect cubes for all the numbers
		pc++;
	} // if

	// If perfect number is true 
	if (perfect_number == true)
	{   // Add to the total number of perfect numbers for all the numbers
		pn++;
	} // if
} // statistics

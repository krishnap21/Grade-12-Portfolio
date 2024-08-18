// Team.h object contains information about team
#pragma once
#include <iostream>
#include <time.h>
#include "Player.h"
using namespace std;


class team
{
public:
	team();         // Constructor - creates the team
	~team();        // Destructor - deletes the team
	void turn();    // The teams turn to pick a player to shot
	void player_stats();   // Individual players stats
	int player_total_makes();   // This method returns the total number of makes that all the players made for 1 point shot
	int player_total_attempts(); // This method returns the total number of attempts that all the players made for 1 point shot
	int player_total_makes2();   // This method returns the total number of makes that all the players made for 2 point shot
	int player_total_attempts2(); // This method returns the total number of attempts that all the players made for 2 point shot
	int player_total_makes3();    // This method returns the total number of makes that all the players made for 3 point shot
	int player_total_attempts3(); // This method returns the total number of attempts that all the players made for 3 point shot
	void team_name();             // This method is the team name
	int get_points();             // This method returns the teams total points
	void rdm();                   // This method seeds the random number generator
	void sb();                    // This method prints out the score board
	



private:
	char t_name[100];        // The teams name
	player* athletes[5];     // Pointer of players on team 
	int total;               // The teams total score
	int p;                   // The teams points for each turn
	int one;                 // The teams total one point makes
	int one1;                // The teams total one point attempts
	int two;                 // The teams total two point makes
	int two2;                // The teams total two point attempts
	int three;               // The teams total three point makes
	int three3;              // The teams total three point attempts

};

// team() - Constructor - creates the team
team::team()
{
	srand((unsigned)time(NULL));

	int i;    // Loop counter
	
	// Initialize to 0
	p = 0;
	total = 0;
	one = 0;
	one1 = 0;
	two = 0;
	two2 = 0;
	three = 0;
	three3 = 0;


	// Ask for the team name
	cout << "Enter Team Name: ";
	cin >> t_name;

	// Loop through instantiating 5 players
	for (i = 0; i < 5; i++)
	{
		athletes[i] = new player(i);
	} // foor


} // team()

// ~team() - Destructor - deletes the team
team::~team()
{
	int k; // Loop counter
	// Loop through the players deleting them
	for (k = 0; k < 5; k++)
	{
		delete athletes[k];
	} // for

	// Tell the user that the team has been deleted
	cout << t_name << " has been deleted" << endl;
} // ~team()

// team_name() - This function outputs the team name
void team::team_name()
{
	// Output the team name
	cout << t_name;
} // team_name()

// turn() - This method decides which player gets a turn to attempt to make a shot
void team::turn()
{
	int player_num;  // The player that will get the chance to make a shot


	// pick a random number between 0-4 to decide which player will make a shot
	player_num = rand() % 5;

	
	// Output the team name
	cout << t_name << ": ";
	// Send the player to the player object to make a shot make p equal to the points that are returned
	p += athletes[player_num]->shot(player_num);

	
} // turn()

// sb() - This method prints out the teams score board
void team::sb()
{
	// Tell the user the teams score
	cout << t_name << ": " << p << endl;
}

// player_stats() - This method gets the stats for each player on the team
void team::player_stats()
{
	// Loop through the players
	for (int i = 0; i < 5; i++)
	{
		// Call the print_stats method in the player object to print the each players stats
		athletes[i]->print_stats(i);
	} // for
} // player_stats()


// player_total_makes() - This method returns the total number of makes that all the players made for 1 point shot
int team::player_total_makes()
{
	// Loop through the players
	for (int x = 0; x < 5; x++)
	{
		// Call method to get the each players number of makes and add each players makes to the identifer one
		one += athletes[x]->pt1_makes(x);
	} // for
	
	// return one to the mainline
	return one;
	
} // player_total_makes()

// player_total_attempts() - This method returns the total number of attempts that all the players attempt for 1 point shot
int team::player_total_attempts()
{
	// Loop through the players
	for (int w = 0; w < 5; w++)
	{
		// Call method to get the each players number of attempts and add each players attempts to the identifer one1
		one1 += athletes[w]->pt1_attempts(w);
	} // for

	// return one1 to the mainline
	return one1;
} // player_total_attempts()


// player_total_makes2() - This method returns the total number of makes that all the players made for 2 point shot
int team::player_total_makes2()
{
	// Loop through the players
	for (int x = 0; x < 5; x++)
	{
		// Call method to get the each players number of makes and add each players makes to the identifer two
		two += athletes[x]->pt2_makes(x);
	} // for

	// return two to the mainline
	return two;
} // player_total_makes2()


// player_total_attempts2() - This method returns the total number of attempts that all the players attempt for 2 point shot
int team::player_total_attempts2()
{
	// Loop through the players
	for (int w = 0; w < 5; w++)
	{
		// Call method to get the each players number of attempts and add each players attempts to the identifer two2
		two2 += athletes[w]->pt2_attempts(w);
	} // for

	// return two2 to the mainline
	return two2;
} // player_total_attempts2()


// player_total_makes3() - This method returns the total number of makes that all the players made for 3 point shot
int team::player_total_makes3()
{
	// Loop through all of the players
	for (int x = 0; x < 5; x++)
	{
		// Call method to get the each players number of makes and add each players makes to the identifer three
		three += athletes[x]->pt3_makes(x);
	} // for
	 
	// return three to the mainline
	return three;
} // player_total_makes3()

// player_total_attempts3() - This method returns the total number of attempts that all the players attempt for 3 point shot
int team::player_total_attempts3()
{
	// loop through players
	for (int w = 0; w < 5; w++)
	{
		// Call method to get the each players number of attempts and add each players attempts to the identifer three3
		three3 += athletes[w]->pt3_attempts(w);
	} // for

	// return three3 to the mainline
	return three3;
} // player_total_attempts3()


// get_points() This method returns the teams total points
int team::get_points()
{
	// Loop through all the players 
	for (int i = 0; i < 5; i++)
	{
		// Call method to get each users points - 1 point, 2 point and 3 point - and add each players points to total
		total += athletes[i]->eachpoint(i);
	} // for

	// return total to mainline
	return total;
	
} // get_points()


// rdm() - This method seeds the random number generator
void team::rdm()
{
	int i;                  // Loop counter

	// Seed the random number generator  - Use the system time
	for (i = 0; i < rand(); i++)
		rand();
	
} // rdm()



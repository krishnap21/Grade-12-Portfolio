// Basketball - This program plays a game of basketball. It starts off by asking the user for the team name and then
//              the name of 5 players for that team and their shooting percentages. The program asks this for both team
//              1 and 2. Then the program plays 4 quarter of 15 alternating turns where the player shoots a 1,2 or 3 point
//              shot and the program tells us if the player made the shot of not after each teams turn the scoreboard is 
//              printed and then at the end of the game, final statistics for both teams are printed including each players
//              stats and the teams 1,2 and 3 point totals. Fianlly the players and teams are deleted
// Krishna Patel - Computer Science 40s
// Nov. 20 2022

#include <iostream>
#include "Team.h"
#include <time.h>
using namespace std;
int main(void)
{

	team* team1;            // Create a pointer to team 1
	team* team2;            // Create a pointer to team 2

	int i;                  // Loop counter

	int gamescore1;         // Team 1's game score
	int gamescore2;         // Team 2's game score
	int makes1;             // The number of 1 point shots all of the team 1 made in total
	int attempts1;          // The number of 1 point attempts all of the team 1 made in total
	int makes2;             // The number of 2 point shots all of the team 1 made in total
	int attempts2;          // The number of 2 point attempts all of the team 1 made in total
	int makes3;             // The number of 3 point shots all of the team 1 made in total
	int attempts3;          // The number of 3 point attempts all of the team 1 made in total

	int makes11;            // The number of 1 point shots all of the team 2 made in total
	int attempts11;         // The number of 1 point attempts all of the team 2 made in total
	int makes22;            // The number of 2 point shots all of the team 2 made in total
	int attempts22;         // The number of 2 point attempts all of the team 2 made in total
	int makes33;            // The number of 3 point shots all of the team 2 made in total
	int attempts33;         // The number of 3 point attempts all of the team 2 made in total

	// Initialize 
	gamescore1 = 0;     
	gamescore2 = 0;
	
	// Create an instance of team 1 and team 2
	team1 = new team;
	team2 = new team;

	// Start the game
	cout << "=== START GAME ===" << endl;

	// Initialize to 1
	int quarter = 1;           // The quarter that the game is on

	// Loop through 4 loops
	while (quarter <= 4)
	{
		// Tell the suer which quarter they are playing in
		cout << "=== QUARTER " << quarter << " ===" << endl;
		// Loop through 15 turns
		for (int i = 1; i <= 15; i++)
		{
			// Call the first teams turn
			team1->turn();
			// Call the 2nd teams trun
			team2->turn();

			// Newline
			cout << endl;
			// Print out the score board
			cout << "SCORE BOARD: " << endl;

			// Call the first teams score
			team1->sb();
			// Call the 2nd teams score
			team2->sb();



			// New line
			cout << endl;
			cout << "PRESS ANY KEY TO CONTINUE ";
			_getwche();
			cout << endl;
		} // for
		// Next quarter
		quarter++;
	} // while

	// Tell the user it's end game
	cout << "=== END GAME ===" << endl;

	// New line
	cout << endl;

	// Tell the teams their final score
	cout << "FINAL SCORE: " << endl;
	// Get team 1's points
	gamescore1 = team1->get_points();
	// Get team 2's points
	gamescore2 = team2->get_points();

	// If team 1s score is greater than team 2s
	if (gamescore1 > gamescore2)
	{
		// Get team 1s name
		team1->team_name();
		// Print out team 1s score
		cout << ": " << gamescore1 << endl;
		// Get team 2s name
		team2->team_name();
		// Print out team 2s score
		cout << ": " << gamescore2 << endl;

		// New line
		cout << endl;
		// Tell the user team 1 won
		cout << "TEAM ";
		team1->team_name();
		cout << " WON THE GAME!!!!" << endl;

	} // if
	else
	{
		// If team 2s score is greater than team 1
		if (gamescore2 > gamescore1)
		{
			// Get team 1s name
			team1->team_name();
			// Print out team 1s score
			cout << ": " << gamescore1 << endl;
			// Get team 2s name
			team2->team_name();
			// Print out team 2s score
			cout << ": " << gamescore2 << endl;

			// New line
			cout << endl;
			// Tell the user team 2 won
			cout << "TEAM ";
			team2->team_name();
			cout << " WON THE GAME!!!!" << endl;
		} // if
		else
		{
			// If team 1s score is equal to team 2s score
			if (gamescore1 == gamescore2)
			{
				// Get team 1s name
				team1->team_name();
				// Print out team 1s score
				cout << ": " << gamescore1 << endl;

				// Get team 2s name
				team2->team_name();
				// Print out team 2s score
				cout << ": " << gamescore2 << endl;

				// Newline
				cout << endl;
				// Tell the user that the teams tied
				cout << "BOTH TEAMS ENDED WITH A TIE" << endl;

			} // if
		} // else
	} // else

	

	// Newline
	cout << endl;
	// Print out team 1s statistics
	cout << "TEAM ";
	// Get team 1s name
	team1->team_name();
	cout << " STATISTICS: " << endl;
	// Get team 1s stats
	team1->player_stats();

	// Newline
	cout << endl; 

	// Print out team 1s student totals 
	// Get team 1s name
	team1->team_name();
	cout << " student totals: " << endl;
	// Get team 1s 1 point shot makes
	makes1 = team1->player_total_makes();
	// Get team 1s 1 point shot attempts
	attempts1 = team1->player_total_attempts();
	// Get team 1s 2 point shot makes
	makes2 = team1->player_total_makes2();
	// Get team 1s 2 point shot attempts
	attempts2 = team1->player_total_attempts2();
	// Get team 1s 3 point shot makes
	makes3 = team1->player_total_makes3();
	// Get team 1s 3 point shot attempts
	attempts3 = team1->player_total_attempts3();
	
	// Print out the results
	cout << " 1 - point shots (" << makes1 << "/" << attempts1 << "(" << float(makes1) * 100 / float(attempts1) << "%) on 1s = " << makes1 << " points" << endl;
	cout << " 2 - point shots (" << makes2 << "/" << attempts2 << "(" << float(makes2) * 100 / float(attempts2) << "%) on 1s = " << makes2 << " points" << endl;
	cout << " 3 - point shots (" << makes3 << "/" << attempts3 << "(" << float(makes3) * 100 / float(attempts3) << "%) on 1s = " << makes3 << " points" << endl;

	// Newline
	cout << endl;
	cout << "TEAM ";
	// Get team 2s name
	team2->team_name();
	cout << " STATISTICS: " << endl;
	// Get team 2s stats
	team2->player_stats();

	// Newline
	cout << endl; 
	// Get team 2s name
	team2->team_name();
	cout << " student totals: " << endl;
	// Get team 2s 1 point shot makes
	makes11 = team2->player_total_makes();
	// Get team 2s 1 point shot attempts
	attempts11 = team2->player_total_attempts();
	// Get team 2s 2 point shot makes
	makes22 = team2->player_total_makes2();
	// Get team 2s 2 point shot attempts
	attempts22 = team2->player_total_attempts2();
	// Get team 2s 3 point shot makes
	makes33 = team2->player_total_makes3();
	// Get team 2s 3 point shot attempts
	attempts33 = team2->player_total_attempts3();

	// Print out the results
	cout << " 1 - point shots (" << makes11 << "/" << attempts11 << "(" << float(makes11) * 100 / float(attempts11) << "%) on 1s = " << makes11 << " points" << endl;
	cout << " 2 - point shots (" << makes22 << "/" << attempts22 << "(" << float(makes22) * 100 / float(attempts22) << "%) on 2s = " << makes22 << " points" << endl;
	cout << " 3 - point shots (" << makes33 << "/" << attempts33 << "(" << float(makes33) * 100 / float(attempts33) << "%) on 3s = " << makes33 << " points" << endl;

	// New line
	cout << endl;

	// Delete team 1 and 2
	delete team1;
	delete team2;

	return 0;
} // Main
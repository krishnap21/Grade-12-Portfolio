// Player.h object contains information about player
#pragma once
#include <iostream>
#include<cstdlib>

using namespace std;

class player
{
public:
	player(int whichplayer);     // Constructor - creates player by asking their name and shooting percentage
	~player();                   // Destuctor - deletes player
	int shot(int pos);           // Method that determines whether or not the player made the shot
    int eachpoint(int k);        // Method that adds the players 1,2 and 3 point shots and returns to the
                                 // teams object
    void print_stats(int who);   // Method that prints the players stats
    void random();               // Random number generator
    int pt1_makes(int one);      // Method returns the players number of one point makes
    int pt1_attempts(int one1);  // Method returns the players number of one point attempts
    int pt2_makes(int two);      // Method returns the players number of two point makes
    int pt2_attempts(int two2);  // Method returns the players number of two point attempts
    int pt3_makes(int three);    // Method returns the players number of three point makes
    int pt3_attempts(int three3); // Method returns the players number of three point attempts
    


private:
    char p_name[100];             // The players name
    int one_point_percentage[5];  // The players one point percentage
    int two_point_percentage[5];  // The players two point percentage
    int three_point_percentage[5]; // The players three point percenatage
    int one_point_attempts[5];     // The players one point attempts
    int one_point_makes[5];        // The players one point makes
    int two_point_attempts[5];     // The players two point attempts
    int two_point_makes[5];        // The players two point makes
    int three_point_attempts[5];   // The players three point attempts
    int three_point_makes[5];      // The players three point makes
    int p_points;                  // The players points after they make a shot
    int playerspoints;             // The players total points
    int shot_type;                 // The players shot type - 1,2 or 3
    int makes;                     // The number of the players one point makes
    int trys;                      // The number of the players one point attempts
    int makes2;                    // The number of the players two point makes
    int trys2;                     // The number of the players two  point attempts
    int makes3;                    // The number of the players three point makes
    int trys3;                     // The number of the players three point attempts

};

// player - Constructor - creates player by asking their name and shooting percentage
// whichplayer - the player that is created - 0 to 4
player::player(int whichplayer)
{
    // Initialize t 0
    p_points = 0;
    playerspoints = 0;
    makes = 0;
    trys = 0;

    // Loop until less than 5
    for (int x = 0; x < 5; x++)
    {
        // Initialize to 0
        one_point_attempts[x] = 0;
        one_point_makes[x] = 0;
        two_point_attempts[x] = 0;
        two_point_makes[x] = 0;
        three_point_attempts[x] = 0;
        three_point_makes[x] = 0;
    } // for

        // Ask the player for their name
        cout << "Enter player " << whichplayer + 1; 
        cin >> p_name;
        

        // Ask for the one point percentage
        cout << "Enter " << p_name << "'s 1-point percentage (0-100): ";
        cin >> one_point_percentage[whichplayer];

        // Validate that the one point percenatge is between 0-100
        while (one_point_percentage[whichplayer] < 0 || one_point_percentage[whichplayer]>100)
        {
            // The percentage that the user entered is not between 0-100 so ask them to re-enter
            cout << "INVALID - Re-enter " << p_name << "'s 1-point percentage (0-100): ";
            cin >> one_point_percentage[whichplayer];
        } // while

        // Ask for the two point percentage
        cout << "Enter " << p_name << "'s 2-point percentage (0-100): ";
        cin >> two_point_percentage[whichplayer];

        // Validate that the two point percenatge is between 0-100
        while (two_point_percentage[whichplayer] < 0 || two_point_percentage[whichplayer]>100)
        {
            // The percentage that the user entered is not between 0-100 so ask them to re-enter
            cout << "INVALID - Re-enter " << p_name << "'s 2-point percentage (0-100): ";
            cin >> two_point_percentage[whichplayer];
        } // while

        // Ask for the three point percentage
        cout << "Enter " << p_name << "'s 3-point percentage (0-100): ";
        cin >> three_point_percentage[whichplayer];

        // Validate that the three point percenatge is between 0-100
        while (three_point_percentage[whichplayer] < 0 || three_point_percentage[whichplayer]>100)
        {
            // The percentage that the user entered is not between 0-100 so ask them to re-enter
            cout << "INVALID - Re-enter " << p_name << "'s 3-point percentage (0-100): ";
            cin >> three_point_percentage[whichplayer];
        } // while
   
} // player()

// Destructor - deletes the player
player::~player() 
{
    // Tell the user that the player has been deleted
    cout << p_name << " has been deleted" << endl;
} // ~player()


// shot() - This method determines whether or not the player made the shot
// pos - the player who is making the shot
int player::shot(int pos)
{
    

   int which_shot;  // Which shot the player is doing - 1, 2 or 3
   int result;  // Random number from 1-100 that is compared to the player percentage to see if the player scored
   int whichpos; // The player who is making the shot
   

    whichpos = pos; // make whichpos equal to pos
   



    // Choose a random shot type (1-point, 2-point, or 3-point)
   which_shot = rand() % 3 + 1;

   // Generate a random number from 1-100
   result = rand() % 100 + 1;

 

    // Determine whether the shot was made based on the player's percentage for that shot type
    // If shot type is 1
    if (which_shot == 1)
    {
            // Add 1 to the number of attempts that the player made
            one_point_attempts[whichpos]++;
            
            // If the randomly generated number from 1-100 is less than one point shooting percentage
            // that the user entered
            if (result <= one_point_percentage[whichpos])
            {
                // Made a 1-point shot so add one to the one_point_makes
                one_point_makes[whichpos]++;
                // points is 1 for the score board
                p_points = 1;
                
                // Tell the user that the player made the shot
                cout << p_name << " made a 1-point shot!" << endl;
            } // if
            else
            { // The player didn't make the shot so tell the user 
                cout << p_name << " missed a 1-point shot!" << endl;
            } // else
        
    } // if
    else
    { 
        // If shot type is 2
        if (which_shot == 2)
        {
            // Add 1 to the number of attempts that the player made
            two_point_attempts[whichpos]++;
            // If the randomly generated number from 1-100 is less than two point shooting percentage
            // that the user entered
            if (result <= two_point_percentage[whichpos])
            {
                // Made a 2-point shot so add one to the two_point_makes
                two_point_makes[whichpos]++;
                // points is 2 for the score board
                p_points = 2;

                // Tell the user that the player made the shot
                cout << p_name << " made a 2-point shot!" << endl;
            } // if
            else
            {
                // The player didn't make the shot so tell the user 
                cout << p_name << " missed a 2-point shot!" << endl;
            } // else
        } // if
        else
        {
            // If the shot type is 3
            if (which_shot == 3)
            {
                // Add 1 to the number of attempts that the player made
                three_point_attempts[pos]++;
                // If the randomly generated number from 1-100 is less than two point shooting
                // percentage that the user entered
                if (result <= three_point_percentage[whichpos])
                {
                    // Made a 3-point shot so add one to the three_point_makes
                    three_point_makes[whichpos]++;
                    // points is 3 for the score board
                    p_points = 3;

                    // Tell the user that the player made the shot
                    cout << p_name << " made a 3-point shot!" << endl;
                } // if
                else
                {
                    // The player didn't make the shot so tell the user 
                    cout << p_name << " missed a 3-point shot!" << endl;
                } // else
            } // if
        } // else

    } // else

    // return the points to the team object
    return p_points;
 
} // shot()

// print_stats() - This method prints the players stats
// who - which players stats are being printed
void player::print_stats(int who)
{
    // Output the players name 
    cout << p_name << ": ";
    // If the players makes and attempts are 0 for one point
    if (one_point_makes[who] == 0 && one_point_attempts[who] == 0)
    {
        // Output the stats with 0% - this is to avoid an error since 0 divided by 0 is undefined
        cout << one_point_makes[who] << "/" << one_point_attempts[who] << "(0%) on 1s, ";
    } // if
    else
    {
        // Output the players one point stats
        cout << one_point_makes[who] << "/" << one_point_attempts[who] << "(" << float(one_point_makes[who]) * 100 / float(one_point_attempts[who]) << "%) on 1s, ";
    } // else

    // If the players makes and attempts are 0 for two point
    if (two_point_makes[who] == 0 && two_point_attempts[who] == 0)
    {
        // Output the stats with 0% - this is to avoid an error since 0 divided by 0 is undefined
        cout << two_point_makes[who] << "/" << two_point_attempts[who] << "(0%) on 2s, ";
    } // if
    else
    {
        // Output the players two point stats
        cout << two_point_makes[who] << "/" << two_point_attempts[who] << "(" << float(two_point_makes[who]) * 100 / float(two_point_attempts[who]) << "%) on 2s, ";
    } // else

    // // If the players makes and attempts are 0 for three point
    if (three_point_makes[who] == 0 && three_point_attempts[who] == 0)
    {
        // Output the stats with 0% - this is to avoid an error since 0 divided by 0 is undefined
        cout << three_point_makes[who] << "/" << three_point_attempts[who] << "(0%) on 3s, ";
    } // if
    else
    {   // Output the players three point stats
        cout << three_point_makes[who] << "/" << three_point_attempts[who] << "(" << float(three_point_makes[who]) * 100 / float(three_point_attempts[who]) << "%) on 3s, ";
    } // else
    
    // Add the 1,2 and 3 point makes and print
    cout << " = " << one_point_makes[who] + (two_point_makes[who] * 2) + (three_point_makes[who] * 3) << " points" << endl;

} // print_stats()

// pt1_makes() - This method returns the players one point makes
// one - the player whose one point makes is being returned
int player::pt1_makes(int one)
{
    // make identfier makes equal to the players one point makes 
    makes = one_point_makes[one];

    // return makes to the teams object
    return makes;
}// pt1_makes()

// pt1_attempts() - This method returns the players one point attempts
// one1 - the player whose one point attempts is being returned
int player::pt1_attempts(int one1)
{

    // make idenifer trys equal to the players one point attempts
    trys = one_point_attempts[one1];

    // return trys to the teams object
    return trys;

} // pt1_attempts()

// pt2_makes() - This method returns the players two point makes
// two - the player whose two point makes is being returned
int player::pt2_makes(int two)
{
    // make identfier makes2 equal to the players two point makes
    makes2 = two_point_makes[two];

    // return makes2 to the teams object
    return makes2;

} // pt2_makes()


// pt2_attempts() - This method returns the players two point attempts
// two2 - the player whose two point attempts is being returned
int player::pt2_attempts(int two2)
{
    // make idenifer trys2 equal to the players two point attempts
    trys2 = two_point_attempts[two2];

    // return trys2 to the teams
    return trys2;

} // pt2_attempts()


// pt3_makes() - This method returns the players three point makes
// three - the player whose three point makes is being returned
int player::pt3_makes(int three)
{
    // make identfier makes3 equal to the players three point makes
    makes3 = three_point_makes[three];
   
    // return makes3 to the teams object
    return makes3;

} // pt3_makes()

// pt3_attempts() - This method returns the players three point attempts
// three3 - the player whose three point attempts is being returned
int player::pt3_attempts(int three3)
{
    // make identifier trys3 equal to the players three point attempts
    trys3 = three_point_attempts[three3];

    // return trye3 to the teams object
    return trys3;
} // pt3_attempts()


// eachpoint() - This method calculates the players total makes out of of 1,2 and 3 and returns it to the team object
// k - the player whose total makes is being calculated
int player::eachpoint(int k)
{
    // Add the one point makes to identifer playerpoints
    playerspoints += one_point_makes[k];
    // Add the two point makes to identifer playerpoints
    playerspoints += (two_point_makes[k] * 2);
    // Add the three point makes to identifer playerpoints
    playerspoints += (three_point_makes[k] * 3);

    // Return playerpoints to teams object
    return playerspoints;
} // eachpoint()

// random() - This method seeds the random number generator
void player::random()
{
    int i;                  // Loop counter

    // Seed the random number generator  - Use the system time
    srand((unsigned)time(NULL));
    for (i = 0; i < rand(); i++)
        rand();
}





// Tic Tac Toe - This game starts by printing out a blank board, the user is then asked what row and column they want they're marker in, the program validates that the user
//               picks a row and column number that is appropriate - between 1-3 and then checks if the spot that the suer wants to put its marker in is blank, if not the
//               user is asked to pick a different row and column. Once he user picks a square thats balnk, the square is set to as the players. After the square is set as the 
//               players, the program checks to see if there are any winners, if so the program ends and tells the user whether they won, the computer won or if it was a draw.
//               If there are no winners, the program continues by internally picking a square for the computers marker, making sure that the square is blank and then sets that 
//               square as the computers and then the program prints out the board with X markers representing the players square and O markers representing the computers square.
//               The program continues to ask the player for a spot to place their marker, internally picks a spot for the computer to place its marker and then prints the board
//               with any X and O markers. At the end of the game, the user will either tell the user that they won, they computer won or if it was a draw.
// Krishna Patel - Computer Science 40s
// Date - October. 9 2022


// Globals 
enum square{blank, player, computer}; // square can have a value of blank, player and computer

// Prototypes
void initialize(square board[3][3]);  // This function sets the entire board to blank
square winner(square board[3][3]);    // This funtion checks the board and sends back any winner (or sends back "blank" if no winner has been found yet)
void print_board(square board[3][3]); // This function print out the current state of the board


#include <iostream>
#include <time.h>
using namespace std;
int main(void)
{
       square board[3][3];   // The tic tac toe board
       square result;        // is the returned value from the winner function 
       bool found_move;      // used to keep track of whether the computer has found a valid move - a blank square to place its marker
       int row;              // The row the user wants its marker in
       int col;              // The column that the user wants it's marker in
       int moves;            // The number of moves made altogether (computer and player) - 9 in total moves that can be made 

       // Seed the random number generator
       int i;                  // Loop counter

       // Seed the random number generator  - Use the system time
       srand((unsigned)time(NULL));
       for (i = 0; i < rand(); i++)
       rand();

       // Initialize the board
       initialize(board);

        
       result = blank;
       // Intialize value
       moves = 0;

       // Print the board so the user can see where they can put their marker
       print_board(board);

       // Loop until there is a winner or the board is full
       while (result == blank)
       {
            // Player's turn
           
            // Ask the user to enter the row that they want thier marker in
            cout << "Enter the row you want your marker in (1-3)";
            cin >> row;

            // Validate that the row is between 1-3
            while (row < 1 || row > 3)
            {
                cout << "INVALID - please enter which row you want your marker in";
                cin >> row;
            } // while

            // Ask the user to enter the column that they want their marker in
            cout << "Enter the column you want your marker in (1-3)";
            cin >> col;

            // Validate that the column is between 1-3
            while (col < 1 || col > 3)
            {
                cout << "INVALID - please enter which col you want your marker in";
                cin >> col;
            } // while

            // Validate that the square the user wants to put it's marker in is blank
            while (board[row - 1][col - 1] != blank)
            {   // This square is taken, so tell the user
                cout << "That square is already taken. Try again: ";

                // Ask the user to re-enter the row that they want their marker in
                cout << "Enter the row you want your marker in";
                cin >> row;

                // Validate that the row is between 1-3
                while (row < 1 || row > 3)
                {
                    cout << "INVALID - please enter which row you want your marker in (1-3)";
                    cin >> row;
                } // while

                // Ask the user to re-enter the column that they want their marker in
                cout << "Enter the column you want your marker in (1-3)";
                cin >> col;

                // Validate that the column is between 1-3
                while (col < 1 || col > 3)
                {
                    cout << "INVALID - please enter which col you want your marker in";
                    cin >> col;
                } // while
            }
            // The square that the user wants to place it's marker is blank so now set that square to player so it's the user square
            board[row -1][col -1] = player;
            // Increase the number of moves made all together
            moves++;

            // Check for a winner before the computers turn

            // assigns the return value of the winner function to the result
            result = winner(board);
            // If the result value isn't blank, it means theres a winner so break out of the while loop
            if (result != blank)
            {
                break;
            } // if

            // If there have been 9 moves made (the board is filled), the result is set to blank indicating that the game is a tie, and the while loop is broken.
            if (moves == 9)
            {
                result = blank;
                break;
            } // if

            // Computer's turn
            // Intialize
            found_move = false;
            // If a valid move is not found
            while (!found_move)
            {
                // pick a random row and column as the computers square
                row = rand() % 3;
                col = rand() % 3;
                // If that square is blank, set it as the computers square
                if (board[row][col] == blank)
                {
                    board[row][col] = computer;
                    // The computer found a valid move so set the boolean identifier to true
                    found_move = true;
                } // if
            } // while

            // Check for a winner 
            result = winner(board);
            // Increase the number of moves made all together
            moves++;

            // Print the board now that the user and computer both made its moves
            print_board(board);

       }

        // Print the final board
        print_board(board);

        // Print the result
        if (result == player)
        { // The player won so let the user know
            cout << "You won!" << endl;
        } // if
        else
        { // The computer won so let the user know
            if (result == computer)
            {
                cout << "The computer won." << endl;
            } // if
            else
            { // It was a draw since 9 moves were made and the result was neither player or computer so let the suer know
                if (moves == 9)
                {
                    cout << "It's a draw." << endl;
                } // if
            } // else
        } // else

        return 0;
} // Main 

// initialize - This function initialize the board to all blank squares
// board[3][3] - The tic tac toe board
void initialize(square board[3][3])
{
    int i; // Loop counter for row
    int j; // Loop counter for column 

    // Loop through setting the enitre board to blank
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = blank;
        } // for
          
    } // for
       
} // initialize

// winner - Checks the board for a winner and return the winner - player or computer  (or sends back "blank" if no winner has been found yet)
// board[3][3] - The tic tac toe board
square winner(square board[3][3])
{
    int i; // Loop counter for rows
    int j; // Loop counter for columns
    // Check rows for a winner
    for (i = 0; i < 3; i++)
    {
        // If these squares have the same value - winner or computer - return the first square because that square will have the value of the winner (either player or computer)
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return board[i][0];
        } // if
           
    } // for
       

    // Check columns for a winner
    for (j = 0; j < 3; j++)
    {
        // If these squares have the same value - winner or computer - return the first square because that square will have the value of the winner (either player or computer)
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j])
        {
            return board[0][j];

        } // if
    } // for
        


    // Check diagonals for a winner
    // If these squares have the same value - winner or computer - return the first square because that square will have the value of the winner (either player or computer)
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return board[0][0];
    } // if
    
    // If these squares have the same value - winner or computer - return the first square because that square will have the value of the winner (either player or computer)
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return board[0][2];
    } // if
      

    // No winner so return blank
    return blank;

} // winner

// print_baord - Prints the current state of the board
// board[3][3] - The tic tac toe board
void print_board(square board[3][3])
{
    // endline to make the output look nice
    cout << endl;

    // Loop through printing the board
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // If the square is set to player print out the X marker
            if (board[i][j] == player)
            {
                cout << "X";
            }
            else
            {
                // If the square is set to computer print out the O marker
                if (board[i][j] == computer)
                {
                    cout << "O";
                }
                else
                {
                    
                    // The square is blank so print it as blank
                    // Print out a blank
                    cout << " ";
                        
                } // else
            } // else

            // if column is less than 2, add a vertical line
            if (j < 2)
            {
                cout << "|";
            } // if
               
        } // for
        // endline to make the output look nice
        cout << endl;

        // // if row is less than 2, add a horizontal line
        if (i < 2)
        {
            cout << "-+-+-" << endl;
        } // if
            
    } // for

    // endline to make the output look nice
    cout << endl;

} // print_board

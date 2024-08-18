using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlTypes;
using System.Drawing;
using System.Linq;
using System.Security.Policy;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Windows.Forms.VisualStyles;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace Slot_Machine
{
    public partial class Slot_Machine : Form
    {
        
        // Slot_Machine - Initialize the screen
        public Slot_Machine()
        {
            InitializeComponent();
        } // Slot_Machine

        Random rnd = new Random(); // creating a new random number generator and assigning it to the variable "rnd"
        int a;          // Random number between 0-4 for slot 1
        int b;          // Random number between 0-4 for slot 2
        int c;          // Random number between 0-4 for slot 3
        

        // Initialize to false
        bool match1 = false; // Used to see if slot 1 is jackpot
        bool match2 = false; // Used to see if slot 2 is jackpot
        bool match3 = false; // Used to see if slot 3 is jackpot


        // Initialize to 0 for beginning of the game
        int move = 0;       // Used to keep track of how many times the code has run
        int wins = 0;       // The number of wins that the user has 
        int losses = 0;     // The number of losses that the user has
        int bid = 0;        // The users bid

        // Initialize to 100 for beginning of the game
        int balance = 100;  // The users balance 

        // InstructionsBtn_Click - if the instructions button is clicked, open the instructions screen
        private void InstructionsBtn_Click(object sender, EventArgs e)
        {
            // Instantiate the instrcutions screen
            InstructionsScreen instructionsWindow = new InstructionsScreen();

            // Open the instructions screen
            instructionsWindow.Show();
        } // InstructionsBtn_Click

        // KeyBtn_Click - if the key button is clicked, open the key screen
        private void KeyBtn_Click(object sender, EventArgs e)
        {
            // Instantiate the key screen
            KeyScreen keyWindow = new KeyScreen();

            // Open the key screen
            keyWindow.Show();
        } //  KeyBtn_Click

        // QuitBtn_Click - if the quit button is clicked, close the game screen
        private void QuitBtn_Click(object sender, EventArgs e)
        {
            // close the current screen
            this.Close();
        } //  QuitBtn_Click

        // ResetBtn_Click - if the reset button is clicked, reset the game
        private void ResetBtn_Click(object sender, EventArgs e)
        {
            // Reset the screen
            Application.Restart();
        } // ResetBtn_Click

        // Before_Game_Result - Takes the users bid and subtracts it from the balance before the slots
        //                      start running
        void Before_Game_Result()
        {
            // Make the bid that the user entered in the textbox equal to the bid identifier
            bid = Convert.ToInt32(BidAmountTxt.Text);
            // Subtract the bid from the balance
            balance = balance - bid;
            // Update the balance text to show the balance after the bid is subtracted
            BalanceLbl.Text = "Balance: $" + Convert.ToString(balance);
        } // Before_Game_Result

        // Game_Result - This function decides whether or not the user wins their bet based off of the slots 
        void Game_Result()
        {
            
            // If all 3 slots are the same
            if (a == b && b == c)
            {
                // The user won a jackpot
                if(match1 == true && match2 == true && match3 == true)
                {
                    // Add 1 to the number of wins
                    wins++;
                    // Update the win text to the new number of wins the user has and to show the user that they won
                    WinLbl.Text = "Wins: " + wins;
                    // Make the bid that the user entered in the textbox equal to the bid identifier
                    bid = Convert.ToInt32(BidAmountTxt.Text);
                    // Since the user got 3 in a row of the jackpot, add the bid times 5 to the users balance
                    balance = balance + (bid * 5);
                    // Update the balance text to show the user their new balance
                    BalanceLbl.Text = "Balance: $" + Convert.ToString(balance);
                    // Make the bid button enabled again
                    BidBtn.Enabled = true;
                    // Make the textbox where the user inputs their bid enabled
                    BidAmountTxt.Enabled = true;
                    // Change the color of the textbox where the user inputs their bid back to white
                    BidAmountTxt.BackColor = Color.White;
                }
                else
                { // The user got 3 in a row but of something other than jackpot
                    // Add 1 to the number of wins
                    wins++;
                    // Update the win text to the new number of wins the user has and to show the user that they won
                    WinLbl.Text = "Wins: " + wins;
                    // Make the bid that the user entered in the textbox equal to the bid identifier
                    bid = Convert.ToInt32(BidAmountTxt.Text);
                    // Since the user got 3 in a row of anything but the jackpot, add the bid times 2 to the users balance
                    balance = balance + (bid * 2);
                    // Update the balance text to show the user their new balance
                    BalanceLbl.Text = "Balance: $" + Convert.ToString(balance);
                    // Make the bid button enabled again
                    BidBtn.Enabled = true;
                    // Make the textbox where the user inputs their bid enabled
                    BidAmountTxt.Enabled = true;
                    // Change the color of the textbox where the user inputs their bid back to white
                    BidAmountTxt.BackColor = Color.White;
                }
            } // if
            else
            {
                // If the user gets 2 in a row
                if (a == b || a == c || b == c)
                {
                    // Add 1 to the number of wins
                    wins++;
                    // Update the win text to the new number of wins the user has and to show the user that they won
                    WinLbl.Text = "Wins: " + wins;
                    // Make the bid that the user entered in the textbox equal to the bid identifier
                    bid = Convert.ToInt32(BidAmountTxt.Text);
                    // Since the user got 2 in a row of any image, give them their bid back
                    balance = balance + bid;
                    // Update the balance text to show the user their new balance
                    BalanceLbl.Text = "Balance: $" + Convert.ToString(balance);
                    // Make the bid button enabled again
                    BidBtn.Enabled = true;
                    // Make the textbox where the user inputs their bid enabled
                    BidAmountTxt.Enabled = true;
                    // Change the color of the textbox where the user inputs their bid back to white
                    BidAmountTxt.BackColor = Color.White;
                } // if
                else
                {
                    // All 3 slots are different images 
                    // Add 1 to the number of losses
                    losses++;
                    // Update the losses text to the new number of losses the user has and to show the user that they lost
                    LossesLbl.Text = "Losses: " + losses;
                    // We already subtracted the bid earlier so keep on showing what is already being shown which is that the user lost their bid
                    BalanceLbl.Text = "Balance: $" + Convert.ToString(balance);
                    // Make the bid button enabled again
                    BidBtn.Enabled = true;
                    // Make the textbox where the user inputs their bid enabled
                    BidAmountTxt.Enabled = true;
                    // Change the color of the textbox where the user inputs their bid back to white
                    BidAmountTxt.BackColor = Color.White;
                } // else
            } // else
            
            // If the users balance is equal to 0
            if (balance <= 0)
            {
                // tell the user that they don't have any money and kick them out of the game
                MessageBox.Show("You don't have any money!! SCRAM");
                // Close the current screen
                this.Close();
            } // if
        } // Game_Result

        // BidBtn_Click - This function validates that the user enters a bid before pressing he bid button and that the bid that the user
        //                does input is less than or equal to their balance
        private void BidBtn_Click(object sender, EventArgs e)
        {
            // If the user didn't enter a bid and presses the bid button
            if(BidAmountTxt.Text =="")
            {
                // Tell the user to enter a bid first
                MessageBox.Show("input a bid first!!");
            } // if
            else
            {
                int x;         // The bid that the user inputs
                bool valid;  // Boolean that is set to true if the user makes a valid bid

                // Make the bid that the user entered in the textbox equal to the x identifier
                x = Convert.ToInt32(BidAmountTxt.Text);
                // Initialize to false
                valid = false;

                // If the users bid is less than or equal to the users balance
                if (x <= balance)
                {
                    // Set to true since the bid that the user made is valid
                    valid = true;
                } // if

                // If the bid is valid
                if(valid)
                {
                    // Calll the Before_Game_Result function 
                    Before_Game_Result();

                    // Enable the timer set on the slots
                    timer1.Enabled = true;
                    // Disable the bid textbox so the user can't input a bid while the slots are running
                    BidAmountTxt.Enabled = false;
                    // Disable the bid button so the user can't press bid while the slots are running
                    BidBtn.Enabled = false;
                    // Change the color of the textbox where the user inputs their bid to black so the user knows they can't enter another bid 
                    // yet
                    BidAmountTxt.BackColor = Color.Black;

                } // if
                else
                {
                    // the user didn't enter a valid bid so tell them to enter a bid lower or equal to their balance
                    MessageBox.Show("INVALID - please enter a bid lower or equal to your balance");

                    // Clear the previous invalid bid that the user put in the text box
                    BidAmountTxt.Clear();
                } // else

            } // else
        } //  BidBtn_Click

        // timer1_Tick - this function decides what image goes in each slot by generating a random number. The slots change until 1 image is picked due to the timer 
        private void timer1_Tick(object sender, EventArgs e)
        {
            // Increment the move identifer by 1
            move++;
            // If "move" is less than 30, the code generates three random numbers (a, b, and c) between 0 and 4.
            if (move < 30)
            {
                // Generates a random number from 0-4
                a = rnd.Next(5);
                b = rnd.Next(5);
                c = rnd.Next(5);
                
                // Pick the image for the first slot
                switch(a)
                {
                    // If the random number 0, slot 1 is a basketball
                    case 0:
                        Slot1.Image = Properties.Resources.basketball3;
                        break;
                    // If the random number 1, slot 1 is a soccer ball
                    case 1:
                        Slot1.Image = Properties.Resources.soccer_ball2;
                        break;
                    // If the random number 2, slot 1 is a volleyball
                    case 2:
                        Slot1.Image = Properties.Resources.volleyball;
                        break;
                    // If the random number 3, slot 1 is a hockey puck
                    case 3:
                        Slot1.Image = Properties.Resources.hockey_puck;
                        break;
                    // If the random number 4, slot 1 is a jackpot
                    case 4:
                        Slot1.Image = Properties.Resources.Jackpot;
                         // Since slot 1 is a jackpot, set match to true
                        match1 = true;
                        break;
                } // switch - a
                switch (b)
                {
                    // If the random number 0, slot 2 is a basketball
                    case 0:
                        Slot2.Image = Properties.Resources.basketball3;
                        break;
                    // If the random number 1, slot 2 is a soccer ball
                    case 1:
                        Slot2.Image = Properties.Resources.soccer_ball2;
                        break;
                    // If the random number 2, slot 2 is a volleyball
                    case 2:
                       Slot2.Image = Properties.Resources.volleyball;
                        break;
                    // If the random number 3, slot 2 is a hockey puck
                    case 3:
                        Slot2.Image = Properties.Resources.hockey_puck;
                        break;
                    // If the random number 4, slot 2 is a jackpot
                    case 4:
                        Slot2.Image = Properties.Resources.Jackpot;
                        // Since slot 2 is a jackpot, set match to true
                        match2 = true;
                        break;
                } // switch - b
                switch (c)
                {
                    // If the random number 0, slot 3 is a basketball
                    case 0:
                        Slot3.Image = Properties.Resources.basketball3;
                        break;
                    // If the random number 1, slot 3 is a soccer ball
                    case 1:
                        Slot3.Image = Properties.Resources.soccer_ball2;
                        break;
                    // If the random number 2, slot 3 is a volleyball
                    case 2:
                        Slot3.Image = Properties.Resources.volleyball;
                        break;
                    // If the random number 3, slot 3 is a hockey puck
                    case 3:
                        Slot3.Image = Properties.Resources.hockey_puck;
                        break;
                    // If the random number 4, slot 3 is a jackpot
                    case 4:
                        Slot3.Image = Properties.Resources.Jackpot;
                        // Since slot 3 is a jackpot, set match to true
                        match3 = true;
                        break;
                } // switch -3
            } // if
            else
            {
                // Disable the timer which makes the slots run
                timer1.Enabled = false;

                // Reset move to 0
                move = 0;
                
                // Call the Game_Result function to see if the user won or lost their bet
                Game_Result();
                   
                
            } // else
        } // timer1_Tick
    } // Slot_Machine Form
} // Slot_Machine

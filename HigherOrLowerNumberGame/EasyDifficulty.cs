using System;
using System.Windows.Forms;

namespace higher_or_lower
{
    public partial class EasyDifficulty : Form
    {
        
        Random randomnumber = new Random();  // creating a new random number generator and assigning it to the variable "randomnumber"

        // Initialize to 0
        int number = 0;   // The random number from 1-10
        int guesses = 0;  // The number of guesses it takes for the user to guess the right number

      

        // EasyDifficulty - Intialize the screen
        public EasyDifficulty()
        {
            InitializeComponent();

            // Call the loadQuestions function which generates a random number from 1-10
            loadQuestions();
        } // EasyDifficulty

        // CheckNumber - this function checks if the number that the user guessed is the right answer; if so the user is told and given a 
        //               rating. if not, then the user is told whether the number that they are attempting to guess is higher or lower than
        //               their guess and the number of guesses the user made is increased
        private void CheckNumber(object sender, EventArgs e)
        {

            int userinput;     // The users guess on the number
            bool valid;        // Boolean that is set to true if the number that the user guesses is between the 1-10

            // Converts the string that the user entered in the text to a integer
            userinput = Convert.ToInt32(GuessNumberTxt.Text);
            // Initialize to false
            valid = false;

            // Increment guesses by 1
            guesses += 1;
            // Update what the guesses text says
            GuessesLbl.Text = "Guesses: " + guesses;

            // If the user guessed a number between 1-10
            if(userinput >= 1 && userinput <= 10)
            {
                // Set to true since the user guessed a number between 1-10
                valid = true;
            } // if

            // If the user guessed a number between 1-10
            if (valid)
            {
                // If the user guess is equal to the random number
                if (userinput == number)
                {
                    // Give the user their rating
                    // If the user guesses the random number in 2 or less tries
                    if(guesses <= 2)
                    {
                        // Tell the user their rating and how many guesses it took them to guess the number
                        MessageBox.Show("THAT'S CALLED PURE TALENT!!! After " + guesses.ToString() + " guesses, you guessed the correct number (" + number + ")!!!");
                    } // if
                    else
                    {
                        // If the user guesses the random number after 3 or 4 guesses 
                        if(guesses >2 && guesses <= 4)
                        {
                            // Tell the user their rating and how many guesses it took them to guess the number
                            MessageBox.Show("Not too bad!! After " + guesses.ToString() + " guesses, you guessed the correct number (" + number + ")!!!");
                        } // if
                        else
                        {
                            // if the user guesses the random number after 5 or more guesses
                            if(guesses > 4 )
                            {
                                // Tell the user their rating and how many guesses it took them to guess the number
                                MessageBox.Show("I think you need to brush up on your guessing skills! After " + guesses.ToString() + " guesses, you guessed the correct number (" + number + ")!!!");
                            } // if
                        } // else
                    } // else
                   
                    // Close this screen
                    this.Close();
                } // if - the user guessed the correct number
                else
                {
                    // If the user guesses a number lower than the random number
                    if (userinput < number)
                    {
                        // Tell the user that the number is higher
                        MessageBox.Show("The number is higher");
                    } // if
                    else
                    {
                        // The user guesses a number that is higher than the random number so tell the user that the number is lower
                        MessageBox.Show("The number is lower");
                    } // else
                } // else
            } // if - the user guessed a valid number
            else
            {
                // The user didn't guesses a number between 1-10 so tell them it is invalid and ask them to guess a number again
                MessageBox.Show("INVALID - please guess a number between 1-10");
            } // else

        } // CheckNumber

        // loadQuestions - This function generates a random number from 1-10
        private void loadQuestions()
        {
            // Used the Next function which is built into C# to assign a random number from 1-10 to the number identifier
            number = randomnumber.Next(1,10);

            // Update the Question label to say that the text is between 1-10
            QuestionLbl.Text = "The number is between: 1 and 10 ";
        } // loadQuestions
    } // EasyDifficulty Form
} // higher_or_lower

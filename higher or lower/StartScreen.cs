using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace higher_or_lower
{
    public partial class StartScreen : Form
    {
        // StartScreen - Initialize the game
        public StartScreen()
        {
            InitializeComponent();
        } // StartScreen

        // LoadGame - If the user picks the play button
        private void LoadGame(object sender, EventArgs e)
        {
            int temp; // Used to determine what level the user chose
            bool pickeddiff; // Used to determine if the user picked a level of difficulty for the very first time they play
            // Assign what level the user chose to the identifer
            temp = DifficultyScreen.diff;
            // Initialize tp false
             pickeddiff = false;

            // If the user picked a level
            if(temp ==1 || temp == 2 || temp == 3)
            {
                // Set to true since user picked a level
                pickeddiff = true;
            } // if

            // If the user picked a level - open the level that they picked
            if(pickeddiff)
            {
                // User picked easy level so open easy screen
                if (temp == 1)
                {
                    // Instantiate that screen
                    EasyDifficulty easygameWindow = new EasyDifficulty();

                    // Open the easy screen
                    easygameWindow.Show();
                } // if
                else
                {   // The user chose medium difficulty so open medium screen
                    if (temp == 2)
                    {
                        // Intiantiate medium screen
                        MedDifficulty medgameWindow = new MedDifficulty();

                        // Open the medium screen
                        medgameWindow.Show();
                    } // if
                    else
                    {
                        // The user chose hard difficulty so open hard screen
                        if (temp == 3)
                        {
                            // Instantiate hard screen 
                            HardDifficulty hardgameWindow = new HardDifficulty();

                            // Open the hard screen
                            hardgameWindow.Show();
                        } // if
                    } // else
                } // else
            } //if 
            // The user didn't pick a difficulty so tell them to do so
            else
            {
                // Tell user to pick a diffculty before pressing play
                MessageBox.Show("INVALID - please pick a level difficulty before pressing play!");
            } // else
           

        } // LoadGame

        // LoadHelp - If the user chooses the help button
        private void LoadHelp(object sender, EventArgs e)
        {
            // Instantiate the help screen
            HelpScreen helpWindow = new HelpScreen();

            // Open the help screen
            helpWindow.Show();
            
        } // LoadHelp

        // QuitBtn_Click - If the user clicks the quit button
        private void QuitBtn_Click(object sender, EventArgs e)
        {
            // Close the window
            this.Close();
        } // QuitBtn_Click

        // DifficultyBtn_Click - If the user clicks the difficulty button
        public void DifficultyBtn_Click(object sender, EventArgs e)
        {
            // Instantiate the diffculty screen
            DifficultyScreen difficultWindow = new DifficultyScreen();

            // Open the difficulty screen
            difficultWindow.Show();
        } // DifficultyBtn_Click
    } // StartScreen Form
} // higher_or_lower

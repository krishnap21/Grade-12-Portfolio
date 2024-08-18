using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace higher_or_lower
{
    public partial class DifficultyScreen : Form
    {
        public static int diff;     // Used to correspond the difficulty that the user picks to a number that can be used later to determine
                                    // which screen to open

        // DifficultyScreen - Initialize the screen
        public DifficultyScreen()
        {
            InitializeComponent();
        } // DifficultyScreen

        // EasyBtn_Click - If easy button is clicked
        public void EasyBtn_Click(object sender, EventArgs e)
        {
            // Difficulty is one
            diff = 1;
            // Close this screen
            this.Close();
        } // EasyBtn_Click

        // MediumBtn_Click - If medium button is clicked
        private void MediumBtn_Click(object sender, EventArgs e)
        {
            // Difficulty is two 
            diff = 2;
            // Close this screen
            this.Close();
        } // MediumBtn_Click

        // HardBtn_Click - If hard button is clicked
        private void HardBtn_Click(object sender, EventArgs e)
        {
            // diffioculty is 3
            diff = 3;
            // Close this screen
            this.Close();
        } // HardBtn_Click

    } // DifficultyScreen Form
} // higher_or_lower

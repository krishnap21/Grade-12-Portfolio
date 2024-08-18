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
    public partial class HelpScreen : Form
    {
        // HelpScreen - Iniialize the screen
        public HelpScreen()
        {
            InitializeComponent();
        } // HelpScree

        // Return_Click - If ok button is clicked
        private void Return_Click(object sender, EventArgs e)
        {
            // Close the help screen - this will return the user to the main menu
            this.Close();
        } // Return_Click
    } // HelpScreen Form
} // higher_or_lower

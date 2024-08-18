using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Slot_Machine
{
    public partial class KeyScreen : Form
    {
        // KeyScreen - Initializes the screen
        public KeyScreen()
        {
            InitializeComponent();
        } // KeyScreen 

        // OkBtn_Click - If the oky button is clicked this screen is closed
        private void OkBtn_Click(object sender, EventArgs e)
        {
            // close this screen
            this.Close();
        } // OkBtn_Click
    } // KeyScreen Form
} // Slot_Machine

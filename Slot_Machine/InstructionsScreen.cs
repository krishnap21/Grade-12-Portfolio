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
    public partial class InstructionsScreen : Form
    {
        // InstructionsScreen - Initialize the screen
        public InstructionsScreen()
        {
            InitializeComponent();
        } // InstructionsScreen

        // OkBtn_Click - if the okay button is clicked, the instruction screen is closed
        private void OkBtn_Click(object sender, EventArgs e)
        {
            // Close this screen
            this.Close();
        } // OkBtn_Click
    } // InstructionsScreen Form
} // Slot_Machine

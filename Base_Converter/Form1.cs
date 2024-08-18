using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Base_Converter
{
    public partial class BaseConverter : Form
    {
        // BaseConverter - Initialize the screen
        public BaseConverter()
        {
            InitializeComponent();
        } // BaseConverter


        // DecimalBtn_Click - If the covert button for the decimal text is clicked, the program checks if the user inputted a decimal number;
        //                    if so, the number is converted to the other bases. If not, the program tells the user to enter a decimal number
        private void DecimalBtn_Click(object sender, EventArgs e)
        {
            int decimalnum; // The decimal number that the user inputted
            bool valid;   // Used to make sure that the user entered a decimal number

            // Initialize to false
            valid = false;

            // Make sure that the number that the user inputed is actually a decimal number
            if(int.TryParse(DecimalTxt.Text, out decimalnum))
            {
                // The user did enter a decimal number so set to true
                valid = true;
            } // if

            // If the number that the user inputted is decimal convert it to the other bases
            if (valid)
            {
                // Update the binary text to show the binary equivalent to the decimal number that the user inputted
                BinaryTxt.Text = Convert.ToString(decimalnum, 2);
                // Update the hexadecimal text to show the hexadecimal equivalent to the decimal number that the user inputted
                HexadecimalTxt.Text = Convert.ToString(decimalnum, 16);
            } // if
            else
            {
                // The user didn't enter a decimal number so tell them to enter one
                MessageBox.Show("Invalid - please enter a decimal value in this box");

                // Clear all of the text boxes
                DecimalTxt.Clear();
                BinaryTxt.Clear();
                HexadecimalTxt.Clear();
            } // else

        } // DecimalBtn_Click

        // BinaryBtn_Click - If the covert button for the binary text is clicked, the program checks if the user inputted a binary number;
        //                    if so, the number is converted to the other bases. If not, the program tells the user to enter a binary number
        private void BinaryBtn_Click(object sender, EventArgs e)
        {
            bool valid;         // Used to make sure that the user entered a binary number
            string binarynum;   // The binary number that the user inputted
            int temp;           // Temporary place holder for a decimal equivalent of binary

            // Initialize to false
            valid = false;
            // Make the binary number identifer equal the number that the user inputted in the text box
            binarynum = BinaryTxt.Text;

            // If the number that the user inputted is a binary number that consists of only 0's and 1's
            if (Regex.IsMatch(binarynum, "^[01]+$"))
            {
                // The user entered a valid binary number so set identifier to true
                valid = true;
            } // if

            // If the number that the user inputted is binary convert it to the other bases
            if (valid)
            {
                // Update the decimal text to show the decimal equivalent to the binary number that the user inputted
                DecimalTxt.Text = Convert.ToInt32(BinaryTxt.Text, 2).ToString();

                // Convert the binary number to decimal number and assign it to the temp identifier
                temp = Convert.ToInt32(BinaryTxt.Text, 2);

                // Convert the decimal number that is assigned to the temp identifier to hexadecimal and update the hexidecimal text to display
                // the hexadecimal equivalent to the binary number that the user inputted
                HexadecimalTxt.Text = Convert.ToString(temp, 16);
            } // if
            else
            {
                // The user didn't enter a binary number so tell them to enter one
                MessageBox.Show("Invalid - please enter a binary value in this box");

                // Clear all of the text boxes
                DecimalTxt.Clear();
                BinaryTxt.Clear();
                HexadecimalTxt.Clear();

            } // else

        } // BinaryBtn_Click


        // HexadecimalBtn_Click - If the covert button for the hexadecimal text is clicked, the program checks if the user inputted a
        //                        hexadecimal number; if so, the number is converted to the other bases. If not, the program tells the
        //                        user to enter a hexadecimal number
        private void HexadecimalBtn_Click(object sender, EventArgs e)
        {
            bool valid;              // Used to make sure that the user entered a binary number
            string hexadecimalnum;   // The hexadecimal number that the user inputted
            int temp;                // Temporary place holder for decimal equivalent of hexadecimal

            // Initialize to false
            valid = false;
            // Make the hexadecimal number identifer equal the number that the user inputted in the text box
            hexadecimalnum = HexadecimalTxt.Text;

            // If the number that the user inputted is a hexadecimal number that consists of only 0-9 and a-f
            if (Regex.IsMatch(hexadecimalnum, "^[a-fA-F0-9]+$"))
            {
                // The user entered a valid hexadecimal number so set identifier to true
                valid = true;
            } // if

            // If the number that the user inputted is hexadecimal convert it to the other bases
            if (valid)
            {
                // Update the decimal text to show the decimal equivalent to the hexadecimal number that the user inputted
                DecimalTxt.Text = Convert.ToInt32(hexadecimalnum, 16).ToString();

                // Convert the hexadecimal number to decimal number and assign it to the temp identifier
                temp = Convert.ToInt32(hexadecimalnum, 16);

                // Convert the decimal number that is assigned to the temp identifier to binary and update the binary text to display
                // the binary equivalent to the hexadecimal number that the user inputted
                BinaryTxt.Text = Convert.ToString(temp, 2);
            } // if
            else
            {
                // The user didn't enter a hexadecimal number so tell them to enter one
                MessageBox.Show("Invalid - please enter a hexadecimal value in this box");

                // Clear all of the text boxes
                DecimalTxt.Clear();
                BinaryTxt.Clear();
                HexadecimalTxt.Clear();
            } // else
        } // HexadecimalBtn_Click

    } // BaseConverter Form
} // Base_Converter

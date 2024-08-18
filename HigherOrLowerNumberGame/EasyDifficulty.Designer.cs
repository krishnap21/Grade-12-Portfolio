namespace higher_or_lower
{
    partial class EasyDifficulty
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.CheckButton = new System.Windows.Forms.Button();
            this.GuessNumberTxt = new System.Windows.Forms.TextBox();
            this.QuestionLbl = new System.Windows.Forms.Label();
            this.GuessesLbl = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // CheckButton
            // 
            this.CheckButton.DialogResult = System.Windows.Forms.DialogResult.OK;
            this.CheckButton.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.CheckButton.Location = new System.Drawing.Point(391, 350);
            this.CheckButton.Name = "CheckButton";
            this.CheckButton.Size = new System.Drawing.Size(241, 107);
            this.CheckButton.TabIndex = 0;
            this.CheckButton.Text = "CHECK";
            this.CheckButton.UseVisualStyleBackColor = true;
            this.CheckButton.Click += new System.EventHandler(this.CheckNumber);
            // 
            // GuessNumberTxt
            // 
            this.GuessNumberTxt.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.125F, System.Drawing.FontStyle.Bold);
            this.GuessNumberTxt.Location = new System.Drawing.Point(174, 267);
            this.GuessNumberTxt.Name = "GuessNumberTxt";
            this.GuessNumberTxt.Size = new System.Drawing.Size(659, 56);
            this.GuessNumberTxt.TabIndex = 1;
            this.GuessNumberTxt.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // QuestionLbl
            // 
            this.QuestionLbl.AutoSize = true;
            this.QuestionLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold);
            this.QuestionLbl.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.QuestionLbl.Location = new System.Drawing.Point(106, 153);
            this.QuestionLbl.Name = "QuestionLbl";
            this.QuestionLbl.Size = new System.Drawing.Size(576, 55);
            this.QuestionLbl.TabIndex = 2;
            this.QuestionLbl.Text = "The number is between: ";
            // 
            // GuessesLbl
            // 
            this.GuessesLbl.AutoSize = true;
            this.GuessesLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.875F, System.Drawing.FontStyle.Bold);
            this.GuessesLbl.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.GuessesLbl.Location = new System.Drawing.Point(12, 19);
            this.GuessesLbl.Name = "GuessesLbl";
            this.GuessesLbl.Size = new System.Drawing.Size(173, 33);
            this.GuessesLbl.TabIndex = 3;
            this.GuessesLbl.Text = "Guesses: 0";
            // 
            // EasyDifficulty
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.RosyBrown;
            this.ClientSize = new System.Drawing.Size(1004, 539);
            this.Controls.Add(this.GuessesLbl);
            this.Controls.Add(this.QuestionLbl);
            this.Controls.Add(this.GuessNumberTxt);
            this.Controls.Add(this.CheckButton);
            this.Name = "EasyDifficulty";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Higher or Lower - Easy Level";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button CheckButton;
        private System.Windows.Forms.TextBox GuessNumberTxt;
        private System.Windows.Forms.Label QuestionLbl;
        private System.Windows.Forms.Label GuessesLbl;
    }
}


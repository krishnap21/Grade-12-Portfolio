namespace Slot_Machine
{
    partial class Slot_Machine
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
            this.components = new System.ComponentModel.Container();
            this.BalanceLbl = new System.Windows.Forms.Label();
            this.BidAmountLbl = new System.Windows.Forms.Label();
            this.BidAmountTxt = new System.Windows.Forms.TextBox();
            this.WinLbl = new System.Windows.Forms.Label();
            this.LossesLbl = new System.Windows.Forms.Label();
            this.BidBtn = new System.Windows.Forms.Button();
            this.InstructionsBtn = new System.Windows.Forms.Button();
            this.ResetBtn = new System.Windows.Forms.Button();
            this.QuitBtn = new System.Windows.Forms.Button();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.KeyBtn = new System.Windows.Forms.Button();
            this.Slot3 = new System.Windows.Forms.PictureBox();
            this.Slot2 = new System.Windows.Forms.PictureBox();
            this.Slot1 = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.Slot3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.Slot2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.Slot1)).BeginInit();
            this.SuspendLayout();
            // 
            // BalanceLbl
            // 
            this.BalanceLbl.AutoSize = true;
            this.BalanceLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.875F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.BalanceLbl.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.BalanceLbl.Location = new System.Drawing.Point(17, 240);
            this.BalanceLbl.Name = "BalanceLbl";
            this.BalanceLbl.Size = new System.Drawing.Size(208, 40);
            this.BalanceLbl.TabIndex = 4;
            this.BalanceLbl.Text = "Balance: $100";
            this.BalanceLbl.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.BalanceLbl.UseCompatibleTextRendering = true;
            // 
            // BidAmountLbl
            // 
            this.BidAmountLbl.AutoSize = true;
            this.BidAmountLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.875F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.BidAmountLbl.Location = new System.Drawing.Point(11, 302);
            this.BidAmountLbl.Name = "BidAmountLbl";
            this.BidAmountLbl.Size = new System.Drawing.Size(184, 33);
            this.BidAmountLbl.TabIndex = 5;
            this.BidAmountLbl.Text = "Bid Amount:";
            // 
            // BidAmountTxt
            // 
            this.BidAmountTxt.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.BidAmountTxt.Location = new System.Drawing.Point(12, 338);
            this.BidAmountTxt.Multiline = true;
            this.BidAmountTxt.Name = "BidAmountTxt";
            this.BidAmountTxt.Size = new System.Drawing.Size(183, 49);
            this.BidAmountTxt.TabIndex = 12;
            this.BidAmountTxt.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // WinLbl
            // 
            this.WinLbl.AutoSize = true;
            this.WinLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.875F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.WinLbl.ForeColor = System.Drawing.Color.DarkGreen;
            this.WinLbl.Location = new System.Drawing.Point(516, 244);
            this.WinLbl.Name = "WinLbl";
            this.WinLbl.Size = new System.Drawing.Size(119, 33);
            this.WinLbl.TabIndex = 13;
            this.WinLbl.Text = "Wins: 0";
            // 
            // LossesLbl
            // 
            this.LossesLbl.AutoSize = true;
            this.LossesLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.875F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LossesLbl.ForeColor = System.Drawing.Color.Red;
            this.LossesLbl.Location = new System.Drawing.Point(516, 302);
            this.LossesLbl.Name = "LossesLbl";
            this.LossesLbl.Size = new System.Drawing.Size(149, 33);
            this.LossesLbl.TabIndex = 14;
            this.LossesLbl.Text = "Losses: 0";
            // 
            // BidBtn
            // 
            this.BidBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.BidBtn.Location = new System.Drawing.Point(255, 427);
            this.BidBtn.Name = "BidBtn";
            this.BidBtn.Size = new System.Drawing.Size(227, 81);
            this.BidBtn.TabIndex = 15;
            this.BidBtn.Text = "PLACE BET";
            this.BidBtn.UseVisualStyleBackColor = true;
            this.BidBtn.Click += new System.EventHandler(this.BidBtn_Click);
            // 
            // InstructionsBtn
            // 
            this.InstructionsBtn.Location = new System.Drawing.Point(0, -1);
            this.InstructionsBtn.Name = "InstructionsBtn";
            this.InstructionsBtn.Size = new System.Drawing.Size(152, 39);
            this.InstructionsBtn.TabIndex = 16;
            this.InstructionsBtn.Text = "Instructions";
            this.InstructionsBtn.UseVisualStyleBackColor = true;
            this.InstructionsBtn.Click += new System.EventHandler(this.InstructionsBtn_Click);
            // 
            // ResetBtn
            // 
            this.ResetBtn.Location = new System.Drawing.Point(316, -1);
            this.ResetBtn.Name = "ResetBtn";
            this.ResetBtn.Size = new System.Drawing.Size(152, 39);
            this.ResetBtn.TabIndex = 17;
            this.ResetBtn.Text = "Reset";
            this.ResetBtn.UseVisualStyleBackColor = true;
            this.ResetBtn.Click += new System.EventHandler(this.ResetBtn_Click);
            // 
            // QuitBtn
            // 
            this.QuitBtn.Location = new System.Drawing.Point(474, -1);
            this.QuitBtn.Name = "QuitBtn";
            this.QuitBtn.Size = new System.Drawing.Size(152, 39);
            this.QuitBtn.TabIndex = 18;
            this.QuitBtn.Text = "Quit";
            this.QuitBtn.UseVisualStyleBackColor = true;
            this.QuitBtn.Click += new System.EventHandler(this.QuitBtn_Click);
            // 
            // timer1
            // 
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // KeyBtn
            // 
            this.KeyBtn.Location = new System.Drawing.Point(158, -1);
            this.KeyBtn.Name = "KeyBtn";
            this.KeyBtn.Size = new System.Drawing.Size(152, 39);
            this.KeyBtn.TabIndex = 19;
            this.KeyBtn.Text = "Key";
            this.KeyBtn.UseVisualStyleBackColor = true;
            this.KeyBtn.Click += new System.EventHandler(this.KeyBtn_Click);
            // 
            // Slot3
            // 
            this.Slot3.Image = global::Slot_Machine.Properties.Resources._2023_01_16__4_;
            this.Slot3.Location = new System.Drawing.Point(522, 67);
            this.Slot3.Name = "Slot3";
            this.Slot3.Size = new System.Drawing.Size(175, 145);
            this.Slot3.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.Slot3.TabIndex = 2;
            this.Slot3.TabStop = false;
            // 
            // Slot2
            // 
            this.Slot2.Image = global::Slot_Machine.Properties.Resources._2023_01_16__4_;
            this.Slot2.Location = new System.Drawing.Point(279, 67);
            this.Slot2.Name = "Slot2";
            this.Slot2.Size = new System.Drawing.Size(175, 145);
            this.Slot2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.Slot2.TabIndex = 1;
            this.Slot2.TabStop = false;
            // 
            // Slot1
            // 
            this.Slot1.Image = global::Slot_Machine.Properties.Resources._2023_01_16__4_;
            this.Slot1.Location = new System.Drawing.Point(29, 67);
            this.Slot1.Name = "Slot1";
            this.Slot1.Size = new System.Drawing.Size(175, 145);
            this.Slot1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.Slot1.TabIndex = 0;
            this.Slot1.TabStop = false;
            // 
            // Slot_Machine
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.ClientSize = new System.Drawing.Size(725, 520);
            this.Controls.Add(this.KeyBtn);
            this.Controls.Add(this.QuitBtn);
            this.Controls.Add(this.ResetBtn);
            this.Controls.Add(this.InstructionsBtn);
            this.Controls.Add(this.BidBtn);
            this.Controls.Add(this.LossesLbl);
            this.Controls.Add(this.WinLbl);
            this.Controls.Add(this.BidAmountTxt);
            this.Controls.Add(this.BidAmountLbl);
            this.Controls.Add(this.BalanceLbl);
            this.Controls.Add(this.Slot3);
            this.Controls.Add(this.Slot2);
            this.Controls.Add(this.Slot1);
            this.ForeColor = System.Drawing.Color.Black;
            this.Name = "Slot_Machine";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Slot Machine:";
            ((System.ComponentModel.ISupportInitialize)(this.Slot3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.Slot2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.Slot1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox Slot1;
        private System.Windows.Forms.PictureBox Slot2;
        private System.Windows.Forms.PictureBox Slot3;
        private System.Windows.Forms.Label BalanceLbl;
        private System.Windows.Forms.Label BidAmountLbl;
        private System.Windows.Forms.TextBox BidAmountTxt;
        private System.Windows.Forms.Label WinLbl;
        private System.Windows.Forms.Label LossesLbl;
        private System.Windows.Forms.Button BidBtn;
        private System.Windows.Forms.Button InstructionsBtn;
        private System.Windows.Forms.Button ResetBtn;
        private System.Windows.Forms.Button QuitBtn;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.Button KeyBtn;
    }
}


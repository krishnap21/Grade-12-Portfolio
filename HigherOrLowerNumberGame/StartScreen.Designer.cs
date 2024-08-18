namespace higher_or_lower
{
    partial class StartScreen
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
            this.GameName = new System.Windows.Forms.Label();
            this.PlayGameBtn = new System.Windows.Forms.Button();
            this.HelpBtn = new System.Windows.Forms.Button();
            this.QuitBtn = new System.Windows.Forms.Button();
            this.DifficultyBtn = new System.Windows.Forms.Button();
            this.DownArrowPicture = new System.Windows.Forms.PictureBox();
            this.UpArrowPicture = new System.Windows.Forms.PictureBox();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.pictureBox2 = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.DownArrowPicture)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.UpArrowPicture)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).BeginInit();
            this.SuspendLayout();
            // 
            // GameName
            // 
            this.GameName.AutoSize = true;
            this.GameName.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.GameName.Location = new System.Drawing.Point(87, 9);
            this.GameName.Name = "GameName";
            this.GameName.Size = new System.Drawing.Size(531, 55);
            this.GameName.TabIndex = 0;
            this.GameName.Text = "Higher or Lower Game";
            // 
            // PlayGameBtn
            // 
            this.PlayGameBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.PlayGameBtn.Location = new System.Drawing.Point(250, 243);
            this.PlayGameBtn.Name = "PlayGameBtn";
            this.PlayGameBtn.Size = new System.Drawing.Size(199, 93);
            this.PlayGameBtn.TabIndex = 3;
            this.PlayGameBtn.Text = "Play";
            this.PlayGameBtn.UseVisualStyleBackColor = true;
            this.PlayGameBtn.Click += new System.EventHandler(this.LoadGame);
            // 
            // HelpBtn
            // 
            this.HelpBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.HelpBtn.Location = new System.Drawing.Point(250, 476);
            this.HelpBtn.Name = "HelpBtn";
            this.HelpBtn.Size = new System.Drawing.Size(199, 93);
            this.HelpBtn.TabIndex = 4;
            this.HelpBtn.Text = "Help";
            this.HelpBtn.UseVisualStyleBackColor = true;
            this.HelpBtn.Click += new System.EventHandler(this.LoadHelp);
            // 
            // QuitBtn
            // 
            this.QuitBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.125F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.QuitBtn.Location = new System.Drawing.Point(250, 590);
            this.QuitBtn.Name = "QuitBtn";
            this.QuitBtn.Size = new System.Drawing.Size(199, 93);
            this.QuitBtn.TabIndex = 5;
            this.QuitBtn.Text = "Quit";
            this.QuitBtn.UseVisualStyleBackColor = true;
            this.QuitBtn.Click += new System.EventHandler(this.QuitBtn_Click);
            // 
            // DifficultyBtn
            // 
            this.DifficultyBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.125F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.DifficultyBtn.Location = new System.Drawing.Point(250, 357);
            this.DifficultyBtn.Name = "DifficultyBtn";
            this.DifficultyBtn.Size = new System.Drawing.Size(199, 93);
            this.DifficultyBtn.TabIndex = 6;
            this.DifficultyBtn.Text = "Levels";
            this.DifficultyBtn.UseVisualStyleBackColor = true;
            this.DifficultyBtn.Click += new System.EventHandler(this.DifficultyBtn_Click);
            // 
            // DownArrowPicture
            // 
            this.DownArrowPicture.Image = global::higher_or_lower.Properties.Resources.up_arrow_1442345_12183761;
            this.DownArrowPicture.Location = new System.Drawing.Point(27, 731);
            this.DownArrowPicture.Name = "DownArrowPicture";
            this.DownArrowPicture.Size = new System.Drawing.Size(177, 171);
            this.DownArrowPicture.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.DownArrowPicture.TabIndex = 2;
            this.DownArrowPicture.TabStop = false;
            // 
            // UpArrowPicture
            // 
            this.UpArrowPicture.Image = global::higher_or_lower.Properties.Resources.up_arrow_1442345_1218376;
            this.UpArrowPicture.Location = new System.Drawing.Point(27, 77);
            this.UpArrowPicture.Name = "UpArrowPicture";
            this.UpArrowPicture.Size = new System.Drawing.Size(177, 171);
            this.UpArrowPicture.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.UpArrowPicture.TabIndex = 1;
            this.UpArrowPicture.TabStop = false;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::higher_or_lower.Properties.Resources.up_arrow_1442345_12183761;
            this.pictureBox1.Location = new System.Drawing.Point(527, 77);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(177, 171);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox1.TabIndex = 7;
            this.pictureBox1.TabStop = false;
            // 
            // pictureBox2
            // 
            this.pictureBox2.Image = global::higher_or_lower.Properties.Resources.up_arrow_1442345_1218376;
            this.pictureBox2.Location = new System.Drawing.Point(527, 731);
            this.pictureBox2.Name = "pictureBox2";
            this.pictureBox2.Size = new System.Drawing.Size(177, 171);
            this.pictureBox2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox2.TabIndex = 8;
            this.pictureBox2.TabStop = false;
            // 
            // StartScreen
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.RosyBrown;
            this.ClientSize = new System.Drawing.Size(716, 914);
            this.Controls.Add(this.pictureBox2);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.DifficultyBtn);
            this.Controls.Add(this.QuitBtn);
            this.Controls.Add(this.HelpBtn);
            this.Controls.Add(this.PlayGameBtn);
            this.Controls.Add(this.DownArrowPicture);
            this.Controls.Add(this.UpArrowPicture);
            this.Controls.Add(this.GameName);
            this.Name = "StartScreen";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Higher or Lower - Menu";
            ((System.ComponentModel.ISupportInitialize)(this.DownArrowPicture)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.UpArrowPicture)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label GameName;
        private System.Windows.Forms.PictureBox UpArrowPicture;
        private System.Windows.Forms.PictureBox DownArrowPicture;
        private System.Windows.Forms.Button PlayGameBtn;
        private System.Windows.Forms.Button HelpBtn;
        private System.Windows.Forms.Button QuitBtn;
        private System.Windows.Forms.Button DifficultyBtn;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.PictureBox pictureBox2;
    }
}
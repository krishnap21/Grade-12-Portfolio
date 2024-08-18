namespace higher_or_lower
{
    partial class DifficultyScreen
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
            this.EasyBtn = new System.Windows.Forms.Button();
            this.MediumBtn = new System.Windows.Forms.Button();
            this.HardBtn = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // EasyBtn
            // 
            this.EasyBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.875F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.EasyBtn.Location = new System.Drawing.Point(251, 94);
            this.EasyBtn.Name = "EasyBtn";
            this.EasyBtn.Size = new System.Drawing.Size(277, 83);
            this.EasyBtn.TabIndex = 0;
            this.EasyBtn.Text = "Easy (1-10)";
            this.EasyBtn.UseVisualStyleBackColor = true;
            this.EasyBtn.Click += new System.EventHandler(this.EasyBtn_Click);
            // 
            // MediumBtn
            // 
            this.MediumBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10.125F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.MediumBtn.Location = new System.Drawing.Point(251, 209);
            this.MediumBtn.Name = "MediumBtn";
            this.MediumBtn.Size = new System.Drawing.Size(277, 83);
            this.MediumBtn.TabIndex = 1;
            this.MediumBtn.Text = "Medium (1-100)";
            this.MediumBtn.UseVisualStyleBackColor = true;
            this.MediumBtn.Click += new System.EventHandler(this.MediumBtn_Click);
            // 
            // HardBtn
            // 
            this.HardBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.HardBtn.Location = new System.Drawing.Point(251, 324);
            this.HardBtn.Name = "HardBtn";
            this.HardBtn.Size = new System.Drawing.Size(277, 83);
            this.HardBtn.TabIndex = 2;
            this.HardBtn.Text = "Hard (1-1000)";
            this.HardBtn.UseVisualStyleBackColor = true;
            this.HardBtn.Click += new System.EventHandler(this.HardBtn_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(139, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(518, 55);
            this.label1.TabIndex = 3;
            this.label1.Text = "Choose your difficulty:";
            // 
            // DifficultyScreen
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.RosyBrown;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.HardBtn);
            this.Controls.Add(this.MediumBtn);
            this.Controls.Add(this.EasyBtn);
            this.Name = "DifficultyScreen";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Higher or Lower - Levels";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button EasyBtn;
        private System.Windows.Forms.Button MediumBtn;
        private System.Windows.Forms.Button HardBtn;
        private System.Windows.Forms.Label label1;
    }
}
namespace Base_Converter
{
    partial class BaseConverter
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
            this.DecimalBtn = new System.Windows.Forms.Button();
            this.BinaryBtn = new System.Windows.Forms.Button();
            this.HexadecimalBtn = new System.Windows.Forms.Button();
            this.DecimalTxt = new System.Windows.Forms.TextBox();
            this.BinaryTxt = new System.Windows.Forms.TextBox();
            this.HexadecimalTxt = new System.Windows.Forms.TextBox();
            this.TitleLbl = new System.Windows.Forms.Label();
            this.DecimalLbl = new System.Windows.Forms.Label();
            this.BinaryLbl = new System.Windows.Forms.Label();
            this.HexadecimalLbl = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // DecimalBtn
            // 
            this.DecimalBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.875F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.DecimalBtn.Location = new System.Drawing.Point(584, 146);
            this.DecimalBtn.Name = "DecimalBtn";
            this.DecimalBtn.Size = new System.Drawing.Size(204, 57);
            this.DecimalBtn.TabIndex = 0;
            this.DecimalBtn.Text = "Convert";
            this.DecimalBtn.UseVisualStyleBackColor = true;
            this.DecimalBtn.Click += new System.EventHandler(this.DecimalBtn_Click);
            // 
            // BinaryBtn
            // 
            this.BinaryBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.875F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.BinaryBtn.Location = new System.Drawing.Point(584, 246);
            this.BinaryBtn.Name = "BinaryBtn";
            this.BinaryBtn.Size = new System.Drawing.Size(204, 57);
            this.BinaryBtn.TabIndex = 0;
            this.BinaryBtn.Text = "Convert";
            this.BinaryBtn.UseVisualStyleBackColor = true;
            this.BinaryBtn.Click += new System.EventHandler(this.BinaryBtn_Click);
            // 
            // HexadecimalBtn
            // 
            this.HexadecimalBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.875F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.HexadecimalBtn.Location = new System.Drawing.Point(584, 346);
            this.HexadecimalBtn.Name = "HexadecimalBtn";
            this.HexadecimalBtn.Size = new System.Drawing.Size(204, 57);
            this.HexadecimalBtn.TabIndex = 0;
            this.HexadecimalBtn.Text = "Convert";
            this.HexadecimalBtn.UseVisualStyleBackColor = true;
            this.HexadecimalBtn.Click += new System.EventHandler(this.HexadecimalBtn_Click);
            // 
            // DecimalTxt
            // 
            this.DecimalTxt.Location = new System.Drawing.Point(243, 146);
            this.DecimalTxt.Multiline = true;
            this.DecimalTxt.Name = "DecimalTxt";
            this.DecimalTxt.Size = new System.Drawing.Size(291, 57);
            this.DecimalTxt.TabIndex = 3;
            this.DecimalTxt.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // BinaryTxt
            // 
            this.BinaryTxt.Location = new System.Drawing.Point(243, 246);
            this.BinaryTxt.Multiline = true;
            this.BinaryTxt.Name = "BinaryTxt";
            this.BinaryTxt.Size = new System.Drawing.Size(291, 57);
            this.BinaryTxt.TabIndex = 3;
            this.BinaryTxt.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // HexadecimalTxt
            // 
            this.HexadecimalTxt.Location = new System.Drawing.Point(243, 346);
            this.HexadecimalTxt.Multiline = true;
            this.HexadecimalTxt.Name = "HexadecimalTxt";
            this.HexadecimalTxt.Size = new System.Drawing.Size(291, 57);
            this.HexadecimalTxt.TabIndex = 3;
            this.HexadecimalTxt.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // TitleLbl
            // 
            this.TitleLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 28.125F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.TitleLbl.Location = new System.Drawing.Point(11, 9);
            this.TitleLbl.Name = "TitleLbl";
            this.TitleLbl.Size = new System.Drawing.Size(777, 73);
            this.TitleLbl.TabIndex = 6;
            this.TitleLbl.Text = "BASE CONVERTER";
            // 
            // DecimalLbl
            // 
            this.DecimalLbl.AutoSize = true;
            this.DecimalLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.DecimalLbl.Location = new System.Drawing.Point(29, 159);
            this.DecimalLbl.Name = "DecimalLbl";
            this.DecimalLbl.Size = new System.Drawing.Size(149, 37);
            this.DecimalLbl.TabIndex = 7;
            this.DecimalLbl.Text = "Decimal:";
            // 
            // BinaryLbl
            // 
            this.BinaryLbl.AutoSize = true;
            this.BinaryLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.BinaryLbl.Location = new System.Drawing.Point(38, 259);
            this.BinaryLbl.Name = "BinaryLbl";
            this.BinaryLbl.Size = new System.Drawing.Size(123, 37);
            this.BinaryLbl.TabIndex = 8;
            this.BinaryLbl.Text = "Binary:";
            // 
            // HexadecimalLbl
            // 
            this.HexadecimalLbl.AutoSize = true;
            this.HexadecimalLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.HexadecimalLbl.Location = new System.Drawing.Point(0, 359);
            this.HexadecimalLbl.Name = "HexadecimalLbl";
            this.HexadecimalLbl.Size = new System.Drawing.Size(221, 37);
            this.HexadecimalLbl.TabIndex = 9;
            this.HexadecimalLbl.Text = "Hexadecimal:";
            // 
            // BaseConverter
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.LightBlue;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.HexadecimalLbl);
            this.Controls.Add(this.BinaryLbl);
            this.Controls.Add(this.DecimalLbl);
            this.Controls.Add(this.TitleLbl);
            this.Controls.Add(this.HexadecimalTxt);
            this.Controls.Add(this.BinaryTxt);
            this.Controls.Add(this.DecimalTxt);
            this.Controls.Add(this.HexadecimalBtn);
            this.Controls.Add(this.BinaryBtn);
            this.Controls.Add(this.DecimalBtn);
            this.Name = "BaseConverter";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Base Converter:";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button DecimalBtn;
        private System.Windows.Forms.Button BinaryBtn;
        private System.Windows.Forms.Button HexadecimalBtn;
        private System.Windows.Forms.TextBox DecimalTxt;
        private System.Windows.Forms.TextBox BinaryTxt;
        private System.Windows.Forms.TextBox HexadecimalTxt;
        private System.Windows.Forms.Label TitleLbl;
        private System.Windows.Forms.Label DecimalLbl;
        private System.Windows.Forms.Label BinaryLbl;
        private System.Windows.Forms.Label HexadecimalLbl;
    }
}


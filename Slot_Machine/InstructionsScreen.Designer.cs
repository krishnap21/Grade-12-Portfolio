namespace Slot_Machine
{
    partial class InstructionsScreen
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(InstructionsScreen));
            this.InstructionsLbl = new System.Windows.Forms.Label();
            this.TitleLbl = new System.Windows.Forms.Label();
            this.OkBtn = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // InstructionsLbl
            // 
            this.InstructionsLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.875F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.InstructionsLbl.Location = new System.Drawing.Point(29, 91);
            this.InstructionsLbl.Name = "InstructionsLbl";
            this.InstructionsLbl.Size = new System.Drawing.Size(723, 439);
            this.InstructionsLbl.TabIndex = 0;
            this.InstructionsLbl.Text = resources.GetString("InstructionsLbl.Text");
            // 
            // TitleLbl
            // 
            this.TitleLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.875F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.TitleLbl.Location = new System.Drawing.Point(230, 9);
            this.TitleLbl.Name = "TitleLbl";
            this.TitleLbl.Size = new System.Drawing.Size(341, 66);
            this.TitleLbl.TabIndex = 1;
            this.TitleLbl.Text = "INSTRUCTIONS:";
            this.TitleLbl.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // OkBtn
            // 
            this.OkBtn.Location = new System.Drawing.Point(589, 520);
            this.OkBtn.Name = "OkBtn";
            this.OkBtn.Size = new System.Drawing.Size(192, 75);
            this.OkBtn.TabIndex = 2;
            this.OkBtn.Text = "OK";
            this.OkBtn.UseVisualStyleBackColor = true;
            this.OkBtn.Click += new System.EventHandler(this.OkBtn_Click);
            // 
            // InstructionsScreen
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.ClientSize = new System.Drawing.Size(793, 607);
            this.Controls.Add(this.OkBtn);
            this.Controls.Add(this.TitleLbl);
            this.Controls.Add(this.InstructionsLbl);
            this.ForeColor = System.Drawing.SystemColors.ControlText;
            this.Name = "InstructionsScreen";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Instructions:";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label InstructionsLbl;
        private System.Windows.Forms.Label TitleLbl;
        private System.Windows.Forms.Button OkBtn;
    }
}
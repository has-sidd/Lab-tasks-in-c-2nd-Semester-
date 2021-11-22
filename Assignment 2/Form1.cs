using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Assignment_Q2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Button[] b = new Button[35];
            for (int x = 0; x <= 8; x++)
            {
                for (int j = 7 - x; j >= 0; j--)
                {
                    b[j] = new Button();
                    b[j].Size = new Size(80, 20);
                    b[j].Location = new Point(x * 80, 20 * j);
                    b[j].BackColor = Color.Red;
                    this.Controls.Add(b[j]);
                }
            }

            for (int x = 0; x <= 7; x++)
            {
                for (int j = 7; j <= 6 + x; j++)
                {
                    b[j] = new Button();
                    b[j].Size = new Size(80, 20);
                    b[j].Location = new Point(x * 80, 20 * j);
                    b[j].BackColor = Color.BlueViolet;
                    this.Controls.Add(b[j]);
                }
            }
            for (int x = 0; x <= 8; x++)
            {
                for (int j = 21 - x; j >= 14; j--)
                {
                    b[j] = new Button();
                    b[j].Size = new Size(80, 20);
                    b[j].Location = new Point(x * 80, 20 * j);
                    b[j].BackColor = Color.DarkOrange;
                    this.Controls.Add(b[j]);
                }
            }
            for (int x = 0; x <= 7; x++)
            {
                for (int j = 21; j <= 20 + x; j++)
                {
                    b[j] = new Button();
                    b[j].Size = new Size(80, 20);
                    b[j].Location = new Point(x * 80, 20 * j);
                    b[j].BackColor = Color.DarkSeaGreen;
                    this.Controls.Add(b[j]);
                }
            }


        }
    }
}

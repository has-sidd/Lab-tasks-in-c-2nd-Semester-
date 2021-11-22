using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab_Session_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int deci = 1;
        private void timer1_Tick(object sender, EventArgs e)
        {
            
            string bin = Convert.ToString(deci, 2);
            string hexa = Convert.ToString(deci, 16);
            textBox1.Text += deci + "\t" + bin+ "\t" + hexa + Environment.NewLine;
            deci++;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            textBox1.Text += "Decimal " + "Binary " + "Hexa" + Environment.NewLine;
        }
    }
}

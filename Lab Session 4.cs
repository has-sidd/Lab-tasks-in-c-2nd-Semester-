using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab_Session_4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            Graphics g = base.CreateGraphics();
            SolidBrush b1 = new SolidBrush(Color.Tomato);
            SolidBrush b2 = new SolidBrush(Color.DeepPink);
            Pen p1 = new Pen(Color.Black);
            g.Clear(Color.White);
            switch(comboBox1.SelectedIndex)
            {
                case 0:
                    g.FillRectangle(b1, 10, 10, 300, 300);
                    break;
                case 1:
                    g.DrawRectangle(p1, 10, 10, 300, 300);
                    break;
                case 2:
                    g.FillRectangle(b2, 10, 10, 400, 300);
                    break;
                case 3:
                    g.DrawRectangle(p1, 10, 10, 400, 300);
                    break;
                case 4:
                    g.FillEllipse(b2, 10, 10, 400, 400);
                    break;
                case 5:
                    g.DrawEllipse(p1, 10, 10, 400, 400);
                    break;
                case 6:
                    g.FillPie(b1, 10, 10, 300, 300, 110, 75);
                    break;
            }
        }
    }
}

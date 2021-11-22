using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Q1
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
            SolidBrush b1 = new SolidBrush(Color.Red);
            SolidBrush b2 = new SolidBrush(Color.Purple);
            SolidBrush b3 = new SolidBrush(Color.Yellow);
            Pen p1 = new Pen(Color.DarkOrange);
            Pen p2 = new Pen(Color.DarkOliveGreen);
            Pen p3 = new Pen(Color.Chocolate);
            g.Clear(Color.White);
            switch (comboBox1.SelectedIndex)
            {
                case 0:
                    g.FillRectangle(b1, 50, 50, 100, 50);
                    break;
                case 1:
                    g.DrawRectangle(p1, 50, 50, 100, 50);
                    break;
                case 2:
                    g.FillEllipse(b2, 20, 20, 100, 100);
                    break;
                case 3:
                    g.DrawEllipse(p2, 20, 20, 100, 100);
                    break;
                case 4:
                    g.FillRectangle(b3, 20, 20, 100, 100);
                    break;
                case 5:
                    g.DrawRectangle(p3, 20, 20, 100, 100);
                    break;
            }
        }
    }
}

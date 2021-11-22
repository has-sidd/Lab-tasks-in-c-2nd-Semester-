using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Q4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        bool draw = true;
        private void Form1_MouseUp(object sender, MouseEventArgs e)
        {
            draw = false;
        }
        private void Form1_MouseDown(object sender, MouseEventArgs e)
        {
            draw = true;
        }

        private void Form1_MouseMove(object sender, MouseEventArgs e)
        {
            if (draw == true)
            {
                Graphics g = base.CreateGraphics();
                Random r = new Random();
                int red = r.Next(0, 255);
                int green = r.Next(0, 255);
                int blue = r.Next(0, 255);
                SolidBrush b1 = new SolidBrush(Color.FromArgb(red, green, blue));
                g.FillEllipse(b1, e.X, e.Y, 10, 10);
            }
        }
    }
}

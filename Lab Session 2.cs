using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab_Session_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int count = 1;
        private void Form1_Load(object sender, EventArgs e)
        {
            Image img = Image.FromFile("E:/Hassaan Siddiqui/Samples/Minions.jpg");
            pictureBox1.Image = img;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (count == 10)
            {
                count = 1;
            }
            pictureBox2.ImageLocation = string.Format(@"E:/Hassaan Siddiqui/Samples/{0}.jpg", count);
            count++;

            Random r = new Random();
            int red = r.Next(0, 256);
            int green = r.Next(0, 256);
            int blue = r.Next(0, 256);
            this.BackColor = Color.FromArgb(red, green, blue);
        }
    }
}

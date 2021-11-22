using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Q3
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
            
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (count ==10)
            {
                count = 0;
            }
            pictureBox1.ImageLocation = string.Format(@"E:/Hassaan Siddiqui/Samples/{0}.jpg", count);
            pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
            pictureBox2.ImageLocation = string.Format(@"E:/Hassaan Siddiqui/Samples1/{0}.jpg", count);
            pictureBox2.SizeMode = PictureBoxSizeMode.StretchImage;
            count++;

            Random r = new Random();
            int red = r.Next(0, 255);
            int green = r.Next(0, 255);
            int blue = r.Next(0, 255);
            this.BackColor = Color.FromArgb(red, green, blue);
        }
    }
}

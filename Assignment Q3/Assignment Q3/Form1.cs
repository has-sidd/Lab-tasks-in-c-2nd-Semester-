using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Assignment_Q3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            label2.Visible = false;  //alien destroyed label
        }
        Random r = new Random();
        int speed;   //random speed of alien 
        int score = 0; 
        private void Form1_Load(object sender, EventArgs e)
        {
            this.BackgroundImage = Image.FromFile(@"E:/background.png");  //space image
            this.Location = new Point(0, 0);
            this.Size = Screen.PrimaryScreen.WorkingArea.Size;

            Image ship = Image.FromFile(@"E:/ship.png");  //space ship image
            pictureBox1.Image = ship;
            pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
            pictureBox1.BackColor = Color.Transparent;
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)  //movement of space ship using arrow keys
        {
            if (e.KeyCode == Keys.Up)
            {
                pictureBox1.Top -= 15;
            }
            if (e.KeyCode == Keys.Down)
            {
                pictureBox1.Top += 15;
            }
            if (e.KeyCode == Keys.Left)
            {
                pictureBox1.Left -= 15;
            }
            if (e.KeyCode == Keys.Right)
            {
                pictureBox1.Left += 15;
            }
        }

        void gameover()  //game over function
        {
            if (score == 7)  //means all aliens are killed
            {
                timer1.Stop();
                label2.Show();  //Alien destroyed label
            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            speed = r.Next(5, 20);  //random speed generation
            if (pictureBox2.Top <= 635 && pictureBox2.Top >= 0 && pictureBox2.Left <=1049 && pictureBox2.Left>=0) //boundaries
            {
                pictureBox2.Top += speed;  //movement
            }
            else { pictureBox2.Location = new Point(88, 58); }  //orignal position

            if (pictureBox3.Top <= 635 && pictureBox3.Top >= 0 && pictureBox3.Left <= 1049 && pictureBox3.Left >= 0)  //boundaries
            {
                pictureBox3.Left += speed;
                pictureBox3.Top -= speed;
            }
            else { pictureBox3.Location = new Point(335, 222); }

            if (pictureBox4.Top <= 635 && pictureBox4.Top >= 0 && pictureBox4.Left <= 1049 && pictureBox4.Left >= 0)  //boundaries
            {
                pictureBox4.Top += speed;
            }
            else { pictureBox4.Location = new Point(1029, 98); }

            if (pictureBox5.Top <= 635 && pictureBox5.Top >= 0 && pictureBox5.Left <= 1049 && pictureBox5.Left >= 0)  //boundaries
            {
                pictureBox5.Left += speed;
            }
            else { pictureBox5.Location = new Point(54, 334); }

            if (pictureBox6.Top <= 635 && pictureBox6.Top >= 0 && pictureBox6.Left <= 1049 && pictureBox6.Left >= 0)  //boundaries
            {
                pictureBox6.Top += speed;
                pictureBox6.Left += speed;
            }
            else { pictureBox6.Location = new Point(549, 4); }

            if (pictureBox7.Top <= 635 && pictureBox7.Top >= 0 && pictureBox7.Left <= 1049 && pictureBox7.Left >= 0)  //boundaries
            {
                pictureBox7.Left -= speed;
            }
            else { pictureBox7.Location = new Point(1031, 535); }

            if (pictureBox8.Top <= 635 && pictureBox8.Top >= 0 && pictureBox8.Left <= 1049 && pictureBox8.Left >= 0)  //boundaries
            {
                pictureBox8.Top -= speed;
                pictureBox8.Left -= speed;
            }
            else { pictureBox8.Location = new Point(549, 4); }

            // intersection:
            if (pictureBox1.Bounds.IntersectsWith(pictureBox2.Bounds) && pictureBox2.Visible)
            {
                pictureBox2.Hide();
                score += 1;
            }
            if (pictureBox1.Bounds.IntersectsWith(pictureBox3.Bounds) && pictureBox3.Visible)
            {
                pictureBox3.Hide();
                score += 1;
            }
            if (pictureBox1.Bounds.IntersectsWith(pictureBox4.Bounds) && pictureBox4.Visible)
            {
                pictureBox4.Hide();
                score += 1;
            }
            if (pictureBox1.Bounds.IntersectsWith(pictureBox5.Bounds) && pictureBox5.Visible)
            {
                pictureBox5.Hide();
                score += 1;
            }
            if (pictureBox1.Bounds.IntersectsWith(pictureBox6.Bounds) && pictureBox6.Visible)
            {
                pictureBox6.Hide();
                score +=1;
            }
            if (pictureBox1.Bounds.IntersectsWith(pictureBox7.Bounds) && pictureBox7.Visible)
            {
                pictureBox7.Hide();
                score += 1;
            }
            if (pictureBox1.Bounds.IntersectsWith(pictureBox8.Bounds) && pictureBox8.Visible)
            {
                pictureBox8.Hide();
                score +=1;
            }
            label1.Text = "Score:" + Convert.ToString(score); //score update
            gameover();  //gameover function called
        }
    }
}

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Assignment_Q1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            // Labels hidden
            game.Visible = false;
            winner.Visible = false;
        }
        int carspeed1;  //speed of car 1
        int carspeed2;  //speed of car 2
        int speedsum1, speedsum2 = 0; //sum of random to speed to determine winner

        private void Form1_Load(object sender, EventArgs e)
        {
            this.BackgroundImage = Image.FromFile(@"E:/Background.png"); //road background

            game.Text = "Game Over";

            Image c1 = Image.FromFile(@"E:/car1.png"); //car1 image
            car1.Image = c1;
            car1.BackColor = Color.Transparent;
            car1.SizeMode = PictureBoxSizeMode.StretchImage;

            Image c2 = Image.FromFile(@"E:/car2.png");  //car 2 image
            car2.Image = c2;
            car2.BackColor = Color.Transparent;
            car2.SizeMode = PictureBoxSizeMode.StretchImage;

        }
        void gameover()  //function for gameover
        {
            if ( timer1.Enabled == false && timer2.Enabled == false) //both cars stopped
            {
                game.Show();  //game over label enabled
                winner.Show();  //winner label enabled
                textBox1.Text += "Speed Sum :" + speedsum1;
                textBox2.Text += "Speed Sum :" + speedsum2;
                if (speedsum1 > speedsum2) // sum of random speed of car1 is greater than car2
                {
                    winner.Text = "Car 1 WINS!"; //label shows car1 wins
                }
                else
                {
                    winner.Text = "Car 2 WINS!"; //label shows car2 wins
                }
            }
        }
        private void timer1_Tick(object sender, EventArgs e) //timer for car1
        {
            Random r1 = new Random();
            carspeed1 = r1.Next(1, 9);  //for assigning random speed to car1
            textBox1.Text += carspeed1 + Environment.NewLine;
            speedsum1 += carspeed1; //calculate sum of speed at every tick
            car1.Top -= carspeed1;  // decreasing value of y for car to move up
            if (car1.Top <= 95)  //car1 reaches finish line
                timer1.Enabled = false; 
            gameover();
        }

        private void button1_Click(object sender, EventArgs e) //click to start the race/timers
        {
            timer1.Start();
            timer2.Start();
        }

        private void button2_Click(object sender, EventArgs e) //click to exit game
        {
            Application.Exit();
        }

        private void timer2_Tick(object sender, EventArgs e) //timer for car2
        {
            Random r2 = new Random();
            carspeed2 = r2.Next(1, 9);  //for assigning random speed to car2
            textBox2.Text += carspeed2 + Environment.NewLine;
            speedsum2 += carspeed2;  //calculate sum of speed at every tick
            car2.Top -= carspeed2;  // decreasing value of y for car to move up
            if (car2.Top <= 95)   //car2 reaches finish line
                timer2.Enabled = false;
            gameover();
        }
    }
}

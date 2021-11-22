using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab_Session_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int sum = 0;
            int marks;
            for (int i = 0; i < 5; i++)
            {
                marks = Convert.ToInt32(Microsoft.VisualBasic.Interaction.InputBox("Enter Marks: "));
                textBox1.Text += marks + Environment.NewLine;
                sum += marks;
            }
            int avg;
            avg = sum / 5;
            textBox1.Text += "Average Marks are: " + avg;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Random r = new Random();
            for (int i = 0; i < 10; i++)
            {
                textBox1.Text += i + "\t" + r.Next(0, 100) + Environment.NewLine;
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.BackColor = Color.Bisque;
            button1.BackColor = Color.Pink;
            button1.ForeColor = Color.Red;
            button2.BackColor = Color.Pink;
            button2.ForeColor = Color.Red;
            textBox1.BackColor = Color.Wheat;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            string[] mylist = new string[5];
            mylist[0] = "Banana";
            mylist[1] = "Apple";
            mylist[2] = "Mango";
            mylist[3] = "Orange";
            mylist[4] = "Melon";
            comboBox1.Items.AddRange(mylist);
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (comboBox1.SelectedIndex != -1)
            {
                listBox1.Items.Add(comboBox1.SelectedItem);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (comboBox1.SelectedIndex != -1)
            {
                listBox1.Items.Remove(listBox1.SelectedItem);
            }
        }

    }
}

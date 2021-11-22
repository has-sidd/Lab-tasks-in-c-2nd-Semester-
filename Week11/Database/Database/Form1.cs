using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.OleDb;


namespace Database
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int counter = 0;
        OleDbConnection con = new OleDbConnection(@"Provider=Microsoft.Jet.OLEDB.4.0; Data source=E:/student.mdb");
        OleDbDataAdapter adap = new OleDbDataAdapter("select * from student ", @"Provider=Microsoft.Jet.OLEDB.4.0; Data source=E:/student.mdb");
        DataSet d1 = new DataSet("student");

        private void Form1_Load(object sender, EventArgs e)
        {
            con.Open();
            adap.Fill(d1, "student");
            textBox1.Text = d1.Tables["student"].Rows[0]["ID"].ToString();
            textBox2.Text = d1.Tables["student"].Rows[0]["Name"].ToString();
            textBox3.Text = d1.Tables["student"].Rows[0]["Phone"].ToString();
            textBox4.Text = d1.Tables["student"].Rows[0]["Address"].ToString();
            textBox5.Text = d1.Tables["student"].Rows[0]["deptID"].ToString();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (counter < d1.Tables["student"].Rows.Count - 1)
            {
                counter += 1;
                textBox1.Text = d1.Tables["student"].Rows[counter]["ID"].ToString();
                textBox2.Text = d1.Tables["student"].Rows[counter]["Name"].ToString();
                textBox3.Text = d1.Tables["student"].Rows[counter]["Phone"].ToString();
                textBox4.Text = d1.Tables["student"].Rows[counter]["Address"].ToString();
                textBox5.Text = d1.Tables["student"].Rows[counter]["deptID"].ToString();
            }
            else if (counter <= d1.Tables["student"].Rows.Count - 1)
            {
                MessageBox.Show("You already on last record");
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (counter != d1.Tables["student"].Rows.Count - 1)
            {
                counter = d1.Tables["student"].Rows.Count - 1;
                textBox1.Text = d1.Tables["student"].Rows[counter]["ID"].ToString();
                textBox2.Text = d1.Tables["student"].Rows[counter]["Name"].ToString();
                textBox3.Text = d1.Tables["student"].Rows[counter]["Phone"].ToString();
                textBox4.Text = d1.Tables["student"].Rows[counter]["Address"].ToString();
                textBox5.Text = d1.Tables["student"].Rows[counter]["deptID"].ToString();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (counter > 0)
            {
                counter -= 1;
                textBox1.Text = d1.Tables["student"].Rows[counter]["ID"].ToString();
                textBox2.Text = d1.Tables["student"].Rows[counter]["Name"].ToString();
                textBox3.Text = d1.Tables["student"].Rows[counter]["Phone"].ToString();
                textBox4.Text = d1.Tables["student"].Rows[counter]["Address"].ToString();
                textBox5.Text = d1.Tables["student"].Rows[counter]["deptID"].ToString();
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (counter > 0)
            {
                counter = 0;
                textBox1.Text = d1.Tables["student"].Rows[counter]["ID"].ToString();
                textBox2.Text = d1.Tables["student"].Rows[counter]["Name"].ToString();
                textBox3.Text = d1.Tables["student"].Rows[counter]["Phone"].ToString();
                textBox4.Text = d1.Tables["student"].Rows[counter]["Address"].ToString();
                textBox5.Text = d1.Tables["student"].Rows[counter]["deptID"].ToString();
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            DataTable d2 = new DataTable("student");
            MessageBox.Show("Connection has established");
            adap.Fill(d2);
            dataGrid1.DataSource = d2;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            OleDbCommand com = new OleDbCommand("Update student set Address='" + textBox4.Text + "' where ID= '" + textBox1.Text + "'", con);
            com.ExecuteNonQuery();
            MessageBox.Show("One record has been updated");
        }

        private void button6_Click(object sender, EventArgs e)
        {
            OleDbCommand com = new OleDbCommand("Insert into student(ID,Name,Phone,Address,deptID) values('" + textBox1.Text + "','" + textBox2.Text + "','" + textBox3.Text + "','" + textBox4.Text + "','" + textBox5.Text + "')", con);
            com.ExecuteNonQuery();
            MessageBox.Show("one record has been added");
        }

        private void button8_Click(object sender, EventArgs e)
        {
            OleDbCommand com = new OleDbCommand("Delete from student where ID= '" + textBox1.Text + "'", con);
            com.ExecuteNonQuery();
            MessageBox.Show("One record has been deleted");
        }

        private void button9_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
            textBox4.Text = "";
            textBox5.Text = "";
        }
    }
}

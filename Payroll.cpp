// class implementation file for project 2 payroll CIS 161
// where all your class function definitions are located
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Payroll.h"

using namespace std;

/* Constructor for the Payroll class which contains 3 parameters.  
It sets the member variables equal to the user arguments passed through the
parameters.  If no values are provided, then the constructor provides default
values for each parameter.*/
Payroll::Payroll(string n, int h, float r) 
{
	name = n;
	hours = h;
	rate = r;
}

/* This function sets the name of the employee.  It contains one parameter (string type)
passed by reference.  It doesn't return any values so its a void type.*/
void Payroll::set_name(string &n) 
{
	name = n; // set the name equal to arg
}

/* This function sets the hours of the employee.  It contains one parameter (int type)
passed by reference.  It doesn't return any values so its a void type.*/
void Payroll::set_hours(int &h) 
{
	hours = h; // set hours equal to arg
}

/* This function sets the pay rate of the employee.  It contains one parameter (float type)
passed by reference.  It doesn't return any values so its a void type.*/
void Payroll::set_rate(float &r)
{
	rate = r; // set rate equal to arg
}

/* This function asks the user for their name, hours worked, and hourly pay rate. It calls
three setter subfunctions and passes user arguments into them.  The function is a void type 
so it doesn't return a value.*/  
void Payroll::set_employee_info() // holds all setter functions
{
	string emp_name;
	int emp_hours;
	float emp_rate;
	
	cout << "Please enter your name : "; getline(cin, emp_name); // ask for name
	cout << "Next, enter your hours worked : "; cin >> emp_hours; // ask for hours worked
	cout << "Finally, enter your hourly rate : "; cin >> emp_rate; // ask for hourly rate
	
	set_name(emp_name);
	set_hours(emp_hours);
	set_rate(emp_rate);
	
} 

/* This function returns the employees name to be used in output.  It is a string const
function because it's returning a string value and not modifying any objects. */
string Payroll::get_name() const
{
	return name;
}

/* This function returns the employees hours to be used in output.  It is a int const
function because it's returning a int value and not modifying any objects. */
int Payroll::get_hours() const
{
	return hours;
}

/* This function returns the employees pay rate to be used in output.  It is a float const
function because it's returning a float value and not modifying any objects. */
float Payroll::get_rate() const
{
	return rate;
}

/* This function calculates and returns the employees gross pay.  It is a float const
function because it's returning a float value and not modifying any objects. */
float Payroll::get_grosspay() const
{
	return (hours * rate);
}

/* This function displays the employees name, hours worked, hourly pay rate, and total wages.  
It calls four getter subfunctions which are sent to a file.  The function is a void type because
it doesn't return any values.*/
void Payroll::get_employee_info()
{
	ofstream outfile("EmployeePayrollClass.txt");
	
	outfile << fixed << showpoint << setprecision(2);
	outfile << "Employee Name : " << get_name() << endl;
	outfile << "Hours worked : " << get_hours() << endl;
	outfile << "Hourly Rate : " << "$" << get_rate() << endl;
	outfile << "Total Wages : " << "$" << get_grosspay() << endl;
	outfile.close();
}

/* Destructor which destroys all the Payroll objects after its been used
in the main function */ 
Payroll::~Payroll() // destructor
{
}

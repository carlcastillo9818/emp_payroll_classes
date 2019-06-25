/*  
Program Name : Employee Payroll System
Program explanation : This program asks an employee for their 
name, their hours worked, and their hourly rate.  It calculates the gross pay (wages)
for the employee by multiplying the hours worked and hourly rate.  Finally it outputs
a short payroll report to a file with the employees name, hours worked, hourly rate, and total wages.
*/

#include <iostream> // library for cin and cout functions
#include <fstream> // library for file functions (ofstream, ifstream, etc.)
#include <iomanip> // library for modifying decimal values (fixed, showpoint, setprecision)
#include "Payroll.h" // Payroll class library to be used in main (Created by me)
using namespace std;

int main()
{
	Payroll msemployee; // defined instance of the Payroll class called msemployee
	
	msemployee.set_employee_info(); // sets all employee information
	msemployee.get_employee_info(); // displays the payroll report for the employee	

	cin.ignore(); // pause screen
	cin.get();
	
	return 0;	
}



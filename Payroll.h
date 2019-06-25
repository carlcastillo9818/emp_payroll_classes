// class specification file for project 2 payroll CIS 161
// where the class declaration is located
#include <iostream>
#include <fstream>
#include <iomanip>

#ifndef PAYROLL // guards :
#define PAYROLL //used to prevent header file from being included twice

using namespace std;

class Payroll
{
	private:
		string name;
		int hours;
		float rate;
		
		float get_grosspay() const;
	public:
		Payroll(string = "", int = 0, float = 0.0); // constructor with default args (prototypes go inside class)
		~Payroll(); // destructor
		
		void set_name(string &); // name setter function
		void set_hours(int &); // hours setter function
		void set_rate(float &); // rate setter function
		void set_employee_info(); // holds all setter functions
		
		string get_name() const; // name getter function
		int get_hours() const; // hours getter function
		float get_rate() const; // rate getter function
		void get_employee_info(); // holds all getter functions
		
};

#endif

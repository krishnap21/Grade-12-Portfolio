// This EmployeeObject.h contains information about an employee
#pragma once
#include <iostream>
using namespace std;


class employee
{
public:
	employee();            // Contructor - creates the employee
	~employee();           // Destructor - creates the employee
	void print_payslip();  // method to print the users play slip




private:
	int employeenumber;   // The employees number
	float hoursworked;    // The number of hours that the employee worked
	float payrate;        // The pay rate that the user enters
	char taxcode;         // The tax code that the user enters - High, Medium, Low
	float grosspay;       // The gross pay if the employee worked less than 40 hours
	float grosspay2;      // The gross pay if the employee worked more than 40 hours
	float incometax;      // The income tax if the employee worked less than 40 hours
	float incometax2;     // The income tax if the employee worked more than 40 hours
	float netpay;         // The net pay if the employee worked less than 40 hours
	float netpay2;        // The net pay if the employee worked more than 40 hours
	float howmanyhoursovertime;   // The number of overtime hours that the user worked
	float payovertime;            // The employees pay for overtime 
	float payhalf;                // How much extra money the employee gets for time and half 
}; // clas employee

// employee - This method is a constructor for a employee object - it creates an employee
employee::employee()
{
	// Ask the user for the employee number
	cout << "Enter employee number ";
	cin >> employeenumber;

	// Ask the user for the number of hours that they worked
	cout << "Enter hours worked ";
	cin >> hoursworked;

	// Ask the user for the pay rate
	cout << "Enter pay rate ";
	cin >> payrate;

	// Ask the user for tax code
	cout << "Enter tax code - (H)igh, (M)edium, (L)ow ";
	// Convert the users input to uppercase
	taxcode = toupper(_getwche());
	cout << endl;

	// Validate that the tax code that the user entered is a option
	while (taxcode != 'H' && taxcode != 'M' && taxcode != 'L')
	{
		// Ask the user to re-enter the tax code
		cout << "Invalid Code - please enter H, M or L ";
		taxcode = toupper(_getwche());
		cout << endl;
	} // while

	
	// If the user worked 40 or less hours
	if (hoursworked <= 40)
	{
		// Calculate the gross pay
		grosspay = hoursworked * payrate;
		// If the tax code is low then multiply the gross pay by 0.1 for the income tax
		if (taxcode == 'L')
		{
			incometax = 0.1 * grosspay;
		} // if
		else
		{
			// If the tax code is medium then multiply the gross pay by 0.2 for the income tax
			if (taxcode == 'M')
			{
				incometax = 0.2 * grosspay;
			} // if
			else
			{   
				// If the tax code is high then multiply the gross pay by 0.4 for the income tax
				if (taxcode == 'H')
				{
					incometax = 0.4 * grosspay;
				} // if
			} // else
		} // else

		// Calculate the users net pay which is gross pay minus income tax
		netpay = grosspay - incometax;
	} // if
	else
	{   // If the user worked over 40 hours
		if (hoursworked > 40)
		{
			// Calculate the gross pay which is 40 hours times the employees pay rate
			grosspay2 = 40.00 * payrate;

			// Calulate how many hours the user worked overtime 
			howmanyhoursovertime = hoursworked - 40;

			// Calculate how much extra money the employee gets for pay and a half
			payhalf = payrate * 0.5;

			// Calculate the pay for overtime
			payovertime = howmanyhoursovertime * (payrate + payhalf);

			// Calculate the income tax if tax code is low
			if (taxcode == 'L')
			{
				incometax2 = 0.1 * (grosspay2 + payovertime);
			} // if
			else
			{
				// Calculate the income tax if tax code is medium
				if (taxcode == 'M')
				{
					incometax2 = 0.2 * (grosspay2 + payovertime);
				} // if
				else
				{
					// Calculate the income tax if tax code is high
					if (taxcode == 'H')
					{
						incometax2 = 0.4 * (grosspay2 + payovertime);
					} // if
				} // else
			} // else

			// Calculate the net pay that the employee gets
			netpay2 = (grosspay2 + payovertime) - incometax2;
			
		} // if
	} // else


} // employee

// ~employee - This method is a destructor for a employee object - it deletes an employee
employee::~employee()
{
	// Print message to tell the user that the employee has been deleted
	cout << "Employee " << employeenumber << " has been deleted" << endl;
} // ~employee

// print_payslip - This method prints the users payslip
void employee::print_payslip()
{
	cout << "PAY SLIP:" << endl;
	// If the employee worked less than 40 hours
	if (hoursworked <= 40)
	{
		// Tell the user their gross pay
		cout << "Employee " << employeenumber << " worked " << hoursworked << " hours @ $" << payrate << " = $" << grosspay << endl;

		// If the tax code is low
		if (taxcode == 'L')
		{
			// Show the employee the calculations for the income tax
			cout << "          Income Tax = 10% * $" << grosspay << " = $" << incometax << endl;
		} // if
		else
		{
			// If the tax code is medium
			if (taxcode == 'M')
			{
				// Show the employee the calculations for the income tax
				cout << "          Income Tax = 20% * $" << grosspay << " = $" << incometax << endl;
			} // if
			else
			{
				// If the tax code is high
				if (taxcode == 'H')
				{
					// Show the employee the calculations for the income tax
					cout << "          Income Tax = 40% * $" << grosspay << " = $" << incometax << endl;
				} // if
			} // else
		} // else

		// Print the pay slip
		cout << "                          NET PAY = $" << netpay << endl;
	} // if
	else
	{
		// If the user worked more than 40 hours
		if (hoursworked > 40)
		{
			// Tell the user how much time they make working 40 hours and how much time they get working overtime 
			cout << "Employee " << employeenumber << " worked 40 hours @ $" << payrate << " = $" << grosspay2 << endl;
			cout << "         " << howmanyhoursovertime << " overtime hours @ $" << payrate + payhalf << " = $" << payovertime << endl;

			// If the tax code is low
			if (taxcode == 'L')
			{
				// Show the employee the calculations for the income tax
				cout << "        Income Tax = 10% * $" << grosspay2 + payovertime << " = $" << incometax2 << endl;
			} // if
			else
			{
				// If the tax code is medium
				if (taxcode == 'M')
				{
					// Show the employee the calculations for the income tax
					cout << "        Income Tax = 20% * $" << grosspay2 + payovertime << " = $" << incometax2 << endl;
				} // if
				else
				{
					// If the tax code is medium
					if (taxcode == 'H')
					{
						// Show the employee the calculations for the income tax
						cout << "        Income Tax = 40% * $" << grosspay2 + payovertime << " = $" << incometax2 << endl;
					} // if
				} // else
			} // else
		} // else

		// Print the pay slip
		cout << "                         NET PAY = $" << netpay2 << endl;

	} // else

} // print_payslip

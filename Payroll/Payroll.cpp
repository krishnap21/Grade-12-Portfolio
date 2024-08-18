// Payroll - This program asks the user to enter a number of employees that they want to print pay slips for, validating that the user enters
//           1-10 employees. The program then asks the employee number, number of hours that the employee worked, the employees pay rate and 
//           the employees tax code for as many employees as the user entered. The program then prints out the pay slip for each employee telling
//           the employee the their gross pay working 40 or less hours and their gross pay for overtime if the employee worked more than 40
//           hours. The program then prints out the users income tax and then the employees net pay which is the gross pay minus the income tax. 
//           After printing out all of the employees pay slips, the program tells the user that every employee number has been deleted from the 
//           database
// Krishna Patel - Computer Science 40s
// DATE - Novermber. 10 2022


#include<iostream>
#include"EmployeeObject.h"
using namespace std;

int main(void)
{
	employee* myemployee;          // A single employee
	employee* manyemployees[10];   // Array of employees
	int howmanyemployees;          // Number of employees that the user wants 
	int pos;                       // Loop counter
	 
	// Initialize
	howmanyemployees = 0;


	// Ask the user how many employees they want to enter
	cout << "How many employee - enter 1-10 ";
	cin >> howmanyemployees;
	
	// Validate that the user enters between 1-10 employees
	while (howmanyemployees < 1 || howmanyemployees > 10)
	{
		cout << "INVALID - please enter only 1-10 employees ";
		cin >> howmanyemployees;
	} // while
	
	// Loop through making to make as many new employees as the user wants
	for (pos = 0; pos < howmanyemployees; pos++)
	{
		manyemployees[pos] = new employee();
	} // for

	// Print the pay slip for all of the users
	for (pos = 0; pos < howmanyemployees; pos++)
	{
		manyemployees[pos]->print_payslip();
	} // for

	// loop through deleting all of the employees
	for (pos = 0; pos < howmanyemployees; pos++)
	{
		delete manyemployees[pos];
	} // for 

	return 0;

}

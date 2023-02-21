//Course: CS215, Section 05
//Project: Lab Assignment 2
//Date: 08/31/2022
//Purpose:To calculate the amount of change a cashier must give back to customer
//Author: Alessandra Lozano, ID#12523364



//for input and output
#include <iostream>
//for mathematical functions (not abs value)
#include <cmath>
//for manipulators
#include <iomanip>

//declaring standard namespace to write code more efficiently
using namespace std;

//variables for equations
const int CENTS_PER_DOLLAR = 100;
const int QUARTER_CONVERSION = 25;
const int DIMES_CONVERSION = 10;
const int NICKELS_CONVERSION = 5;
const double ROUND_OFF = 0.5;
const int WIDTH = 10;

//declaring main function
int main()
{
	//declaring variables to hold input values
	double amt_due;
	double amt_recieved;

	//variables to store change
	double change;
	int Dollars;
	int Quarters;
	int Dimes;
	int Nickels;
	int Pennies;
	int change_in_pennies;

	//output command that prompts the user for input
	cout << "Enter the amount due: $";
	//stores users input in variable amt_due
	cin >> amt_due;
	//output command that prompts the user for input
	cout << "\nEnter the amount recieved: $";
	//stores user input in variable amt_recieved
	cin >> amt_recieved;

	//If statement for when the amount due is more than the customer paid
	if (amt_due > amt_recieved)
	{
		//output statement stating there is not enough money for the purchase
		cout << "\nInsufficient funds for purchase :(" << endl;
	}

	else
	{
		//function which calculates change that customer gets back
		change = (amt_recieved - amt_due);
		change_in_pennies = (change * CENTS_PER_DOLLAR) + ROUND_OFF;
		Dollars = change_in_pennies/ CENTS_PER_DOLLAR;
		change_in_pennies = change_in_pennies - (Dollars * CENTS_PER_DOLLAR);
		Quarters = change_in_pennies/ QUARTER_CONVERSION;
		change_in_pennies = change_in_pennies - (Quarters * QUARTER_CONVERSION);
		Dimes = change_in_pennies / DIMES_CONVERSION;
		change_in_pennies = change_in_pennies - (Dimes * DIMES_CONVERSION);
		Nickels = change_in_pennies / NICKELS_CONVERSION;
		change_in_pennies = change_in_pennies - (Nickels * NICKELS_CONVERSION);
		Pennies = change_in_pennies;

		//Output displaying the change that must be given to a customer in organized columns and rows 

		cout << "\nThe change is: " << endl << setw(WIDTH) << "Dollars: " << Dollars << endl;
		cout << setw(WIDTH) << "Quarters: " << Quarters << endl;
		cout << setw(WIDTH) << "Dimes: " << Dimes << endl;
		cout << setw(WIDTH) << "Nickels: "  << Nickels << endl;
		cout << setw(WIDTH) <<"Pennies: "  << Pennies << endl;
	}

	//ends program
	return 0;
}

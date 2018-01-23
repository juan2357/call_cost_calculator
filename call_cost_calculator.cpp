/***********************************************************
Name:  Juan Perez   Z#: 23026404
Course: Foundations of Computer Science (COP3014)
Professor: Dr. Lofton Bullard
Due Date: 01/23/18      Due Time: 11:59 PM
Total Points: 10     Assignment 1: call_cost_calculator

Description: This is a program that calculates the net cost of a call (net_cost),
              the tax on a call (call_tax)
              and the total cost of the call (total_cost).


*************************************************************/
#include <iostream> //standard library for i/o
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//Variable Declarations
	string user_response = "y";
  double net_cost,
         call_tax,
         total_cost,
         tax_rate;
  int relays,
      call_length;
  string cell_num = "";
	//Runs program until user enters "n"
	while (user_response == "y" || user_response == "Y")
	{
			//Name:  Input
			//Precondition: The varialbes cell_num, relays, and call_length have not been initialized
			//Postcondition: The variables have been initialized by the user.
			//Description: Get input values from user.
      std::cout << "Pleae enter you phone number: " << endl;
      std::cin >> cell_num;
      std::cout <<"Please enter the number of relays: " << endl;
      std::cin >> relays;
      std::cout << "Please enter the number of minutes on the call" << endl;
      std::cin >> call_length;
			//Name:  Process
			//Precondition: The variables have been initialized by the user.
			//Postcondition: Conditional statements initialize relay variables.
			//Description: Calculates net_cost, call_tax and total_cost.
      if (relays <= 0 && relays <=5) {
        tax_rate = 0.01;
      } else if (relays <= 6 && relays <=11) {
        tax_rate = 0.03;
      } else if (relays <= 12 && relays <=20) {
        tax_rate = 0.05;
      } else if (relays <= 21 && relays <=50) {
        tax_rate = 0.08;
      } else {
        tax_rate = 0.12;
      }

      net_cost = relays/50.0 * 0.40 * call_length;
      call_tax = net_cost * tax_rate;
      total_cost = net_cost + call_tax;
			//Name:  Output
			//Precondition: The variables have been initialized and calculated
			//Postcondition: Results are displayed.
			//Description: Prints results from user input and calculations.

      cout.setf(ios::fixed);
      cout.setf(ios::showpoint);
      cout.precision(2);

      std::cout << std::left << setw(30)<< "Cell Phone " << cell_num << endl;
      std::cout << std::left << setw(30)<< "Number of Relay Stations " << relays << endl;
      std::cout << std::left << setw(30)<< "Minutes Used " << call_length << endl;
      std::cout << std::left << setw(30)<< "Net Cost " << net_cost << endl;
      std::cout << std::left << setw(30)<< "Call Tax " << call_tax << endl;
      std::cout << std::left << setw(30)<< "Total Cost of Call " << total_cost<< endl;

	    cout<<"Would you like to do another calculation (Y or N): "<<endl;
	    cin>>user_response;
	}

	return  0;
}

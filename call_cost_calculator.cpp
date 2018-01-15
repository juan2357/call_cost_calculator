/***********************************************************
Juan Perez        Total Points:  10
Due Date:  Jan 23, 2018
Course:  C0P3014
Assignment:  Program 1
Professor: Dr. Lofton Bullard

Description: This is a program that calculates the net cost of a call (net_cost),
              the tax on a call (call_tax)
              and the total cost of the call (total_cost).


*************************************************************/
#include <iostream> //standard library for i/o
#include <string>

using namespace std;

int main()
{
	string user_response = "y";
  double net_cost,
         call_tax,
         total_cost,
         tax_rate;
  int relays,
      call_length,
      cell_num;



	while (user_response == "y" || user_response == "Y")
	{
      std::cout << "Pleae enter you phone number: " << '\n';
      std::cin >> cell_num;
      std::cout << "PLease enter the number of minutes on the call" << '\n';
      std::cin >> call_length;
      cout <<"Please enter the number of relays: " <<endl;
      cin >> relays;


      if (relays <= 0 && relays <=5) {
        tax_rate = 1.01;
      } else if (relays <= 6 && relays <=11) {
        tax_rate = 1.03;
      } else if (relays <= 12 && relays <=20) {
        tax_rate = 1.05;
      } else if (relays <= 21 && relays <=50) {
        tax_rate = 1.08;
      } else {
        tax_rate = 1.12;
      }

      net_cost = relays/50.0 * 0.40 * call_length;
      call_tax = net_cost * tax_rate;
      total_cost = net_cost + call_tax;

      std::cout << "Cell Phone " << cell_num << '\n';
      std::cout << "Number of Relay Stations " << relays << '\n';
      std::cout << "Minutes Used " << call_length << '\n';
      std::cout << "Net Cost " << net_cost << '\n';
      std::cout << "Call Tax " << call_tax << '\n';
      std::cout << "Total Cost of Call " << total_cost<< '\n';

	    cout<<"Would you like to do another calculation (Y or N): "<<endl;
	    cin>>user_response;
	}

	return  0;
}

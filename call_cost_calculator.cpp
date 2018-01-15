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

	while (user_response == "y" || user_response == "Y")
	{
                       //The code to get the user's input, perform the calculations, and print
                       // the results to the screen should go here.

	    cout<<"Would you like to do another calculation (Y or N): "<<endl;
	    cin>>user_response;
	}

	return  0;
}

//Lab7-4.cpp - displays the average electric bill
//Created/revised by Hannah Haynes on 24 July 2024

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	double bill = 0.0;
	double totalBills = 0.0;
	double averageBill = 0.0;
	int months = 0;

	cout << "Bill for month 1: $";
 	cin >> bill;
while (bill >=0.0)
	{
		totalBills += bill;
		months += 1;
		cout << "Bill for month " << months + 1 << ": $";
		cin >> bill;
	}//end while

if (months >0)
	{
		averageBill = totalBills / months;
		cout << fixed << setprecision(2);
		cout << "Average electric bill for " << months << "months: $" << averageBill << endl;
	}
else
		cout << "No bill amount entered." << endl;
	//end if	
 
	return 0;
}	//end of main function
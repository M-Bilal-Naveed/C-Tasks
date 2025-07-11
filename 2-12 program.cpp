/* This program prints four lines of inventory data on an inventory report to give the user an idea of what a new report will look like. Since this is not a real 
   report, no input is required. The data are all specified as constants.
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// Local Declaration
	
	// Statements
	 // Print data
	 cout<< "\tPart Number\tQty On Hand";
	 cout<< "\tQty On Order\tPrice\n";
	 //Print Data
	 cout<< fixed << showpoint << setprecision(2);
	 cout<< "\t " << setfill('0')
	     << setw(6) << 31235 << "\t"
	     << setfill(' ')
	     <<setw(7) << 22 << "\t\t"
	     <<setw(7) << 86 << "\t\t"
	     << '$' << setw(7) << 45.62 << endl;
	cout<<"\t " << setfill('0')
	    << setw(6) << 321 << "\t"
	    << setfill(' ')
	    << setw(7) << 55 << "\t\t"
	    << setw(7) << 21 << "\t\t"
	    << '$' << setw(7) << 122. << endl;
	cout<< "\t " << setfill('0')
	    << setw(6) << 28764 << "\t"
		<< setfill(' ')
		<< setw(7) << 0 << "\t\t"
		<< setw(7) << 24 << "\t\t"
		<< '$' << setw(7) << .75 << endl;
    cout<< "\t " << setfill('0')
	    <<setw(6) << 3232 << "\t" 
	    << setfill(' ')
	    << setw(7) << 12 << "\t\t"
	    << setw(7) << 0 << "\t\t"
	    << '$' << setw(7) << 10.91 << endl;
	 // Print  and massage
	 cout << "\n\tEnd of Report\n";
	 return 0; 
} // main

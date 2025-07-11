/* This program calculate and print the sum of three numbers input by the user at the keyboard
    Writter name:     Muhammad bilal
    date        :     03 september 2022
*/
#include <iostream>
using namespace std;
int main (void)
{
	// Local Declarations
	int a,b,c;
	
	int sum;
	
	// Statements
	cout<< "Welcom. This proram adds\n";
	cout<< "Three Numbers. Enter Three Numbers\n";
	cout<< "In the Form. nnn nnn nnn\n";
		
	cin >> a >> b >> c;
	
	//Numbers are Now in a, b and c. Add Them.
	sum=a + b+ c;
	
	cout <<"\n The Total is :" << sum <<"\n\n";
	
	cout<<"\nThank you. Have a good day .\n";
	
	return 0;
} // main

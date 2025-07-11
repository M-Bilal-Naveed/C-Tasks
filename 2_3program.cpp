/* This program Demonstrates Three ways of using Constant.
    Written by:    Muhammad Bilal
    Date      :    03 September 2022
*/
#include <iostream>
#define PI 3.1415926536
using namespace std;

int main(void)
{
	// Local Declarations
	const double pi = 31415926536;
	
	// Statements
	cout << "Defined constant PI: " << PI << '\n';
	cout << "Memory constant pi: " << pi << '\n';
	cout << "Literal constant: "  <<3.1415926536<<'\n';
	return 0;
} // main

/* This program demonstrates the use of the numeric manipulator.
  Written by :  Muhammad Bilal
  Date :        04 September 2022
  */
  #include <iostream>
  #include <iomanip>
  using namespace std;
  
  int main (void)
  {
  	// Local Declarations
  	int   d123   = 123;
  	
  	// Statements
  	cout << "Values in decimal: \t";
  	cout << setw(5) << d123 << setw(5) << d123 << endl;
  	
  	cout << "Values in haxadecimal: \t";
  	cout << hex;
  	cout << setw(5) << d123 << setw(5) << d123 << endl;
  	
  	cout << "Values in octal: \t";
  	cout << oct;
  	cout << setw(5) << d123 << setw(5) << d123 << endl;
  	
  	cout << "Values in decimal: \t";
  	cout << dec;
  	cout << setw(5) << d123 << setw(5) << d123 << endl;
  	
  	return 0;
  } // main

/* Demonstrate floating-point manipulators.
  Written by :  Muhammad Bilal
  Date       :  04 September 2022
  */
  #include <iostream>
  #include <iomanip>
  using namespace std;
  
  int main (void)
  {
  	// Local Declaration
  	float  f1     = 1.;
  	float  f1234  = 1.234;
  	float  f123456789 = 1234567.875;
  	
  	// Statement
  	cout << "Demonstrate float manipulators\n\n";
  	
  	cout << f1 << "\t\tWith no manipulators\n";
  	cout << f1234 << endl;
  	cout << f123456789 << endl << endl;
  	
  	cout << fixed;
  	cout << f1 << "\t\tWith fixed added\n";
  	cout << f1234 << endl;
  	cout << f123456789 << endl << endl;
  	
  	cout << setprecision(2);
  	cout << f1 << "\t\tWith setprecision added\n";
  	cout << f1234 << endl;
  	cout << f123456789 << endl << endl;
  	
  	cout << showpoint;
  	cout << f1 << "\t\tWith showpoint added\n";
  	cout << f1234 << endl;
  	cout << f123456789 << endl << endl;
  	
  	return 0;
  } // main

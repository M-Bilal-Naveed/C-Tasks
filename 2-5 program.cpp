/* Demnonstrate the use of the set width manipulater.
  Written by :      Muhammad Bilal
  Date       :     03 September 2022
  */
  #include <iostream>
  #include <iomanip>
  using namespace std;
  
  int main (void)
  {
  // Local Declarations
    int    d123 = 123;
	float  f123 = 1.23;
	char   chA  = 'A';
	
	// Statements
	  cout << "Demonstrate set width manipulator\n";
	  
	  cout << "0...0....1....1" << endl;
	  cout << "1...5....0....5" << endl;
	  cout << d123 << f123 << chA <<"\t | no width" << endl;
	  cout << setw(1) << d123
	       << setw(1) << f123
		   << setw(1) << chA 
		   << "\t | width too small" << endl;
	  cout << setw(5) << d123
	       << setw(5) << f123
		   << setw(5) << chA
		   << "\t | width 5 space each" << endl;
	  cout << setw(10) << "Hello"
	       << "\t | string width 10" << endl;
	  cout << setw(3) << "Hello"
	       << "\t | string width 3" << endl;
		   
		   return 0;	
  } // main

/* Demonstrate the extenaction operator.
 Written by :  Muhammad Bilal
 Date       :  03 September 2022
 */
 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 int main ( )
 {
 	// Local Declaration
 	 char   character;
 	 int    integer;
 	 float  dlrAmnt;
 	 
 	 // Statements
 	 cout << "Please enter an integer,"
 	      << "a dollar amount and a character.\n";
 	 cin >> integer >> dlrAmnt >> character;
 	 
 	 cout << "\nThank you. You entered:\n";
 	 cout << setw(6) << integer << " "
 	      << setfill('*') << setprecision(2) << fixed
 	      << '$' << setw(10) << dlrAmnt
 	      << setfill(' ') << setw(3) << character << endl;
 	      
 	      return 0;
 } // main

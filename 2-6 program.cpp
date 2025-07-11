/* Demonstrate fill character.
  Written by  :  Muhammad Bilal
  Date        :  04 September 2022
  */
#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
	// Local Declaration
	float amount = 123.45;
	
	// Statements
	cout << "Demonstrate fill characters\n\n";
	
	cout << setw(10) << amount
	     << "\tAmount with space fill\n";
	     
   cout << setw(10) << setfill('*') << amount
        << "\tAmount with check protection fill\n";
        
   cout << setw(10) << setfill(' ') << amount
        << "\tand again with space fill\n";
        
    return 0;
} // main

/* This program calculates the area and circumferencen of a circle.
 Written by : Muhammad Bilal
 Date       : 03 September 2022
 */
 #include <iostream>
 using namespace std;
 
 int main( )
 {
 	//Local Declarations
 	float circle;
 	float area;
 	float radius;
 	float circ;
 	
 	// Statements
 	
 	cout << "\nPlease enter the value of the radius: ";
 	cin >> radius;
 	
 	 circ = 2 * 3.1416 * radius;
 	 area = 3.1416 * radius * radius;
 	
 	cout << "\nRadius is :        " << radius;
 	cout << "\nCircumference is : " << circ;
 	cout << "\nArea is :          " << area;
 	
 	return 0;
 } // main

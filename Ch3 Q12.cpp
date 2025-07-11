/*Program gave quotient and remainder */
#include<iostream>
using namespace std;
int main( )
{
	//Local Declaration
	int dividend;
	int divider;
	int quotient;
	int remainder;
	//Statements
	cout<<"Give dividend=";
	cin>>dividend;
	cout<<"Give divider=";
	cin>>divider;
	quotient = dividend / divider;
	remainder= dividend % divider;
	cout<<"quotient="<<quotient<<endl;
	cout<<"remainder="<<remainder<<endl;
	return 0;
	
}

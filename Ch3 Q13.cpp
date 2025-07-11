/* this program extracts and print the rightmost digit of an integer.*/
#include<iostream>
using namespace std;
int main ( )
{
	//Local Declaration
	int a;
	//Statements
	cout<<"Enter an integer :\n";
	cin>>a;
	cout<<"The Rightmost digit is\n";
	cout<<a % 100<<endl;
	return 0;
	
}

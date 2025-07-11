/*this program calculate area and perimeter by length and width*/
#include<iostream>
using namespace std;
int main ( )
{
	//Local Declaration
	float length;
	float width;
	float area;
	float primeter;
	//Statements
	cout<<"Enter Length of rectangle\n";
	cin>>length;
	cout<<"Enter Width of rectangle\n";
	cin>>width;
	area=length*width;
	primeter=(length+width) * 2;
	cout<<"Area of rectangle\n";
	cout<<area<<endl;
	cout<<"Primeter of rectangle\n";
	cout<<primeter<<endl;
	return 0;
}

/*this program convert degree into radian.*/
#include<iostream>
#include<math.h>
using namespace std;
int main ( )
{
	//Local Declaration
	float degree;
	float radian;
	//Statements
	cout<<"Convert degree into radian\n";
	cout<<"Enter the amount of degree\n";
	cin>>degree;
	radian= degree * (M_PI / 180);
	cout<<"Amount in radian\n";
	cout<<radian<<endl;
	return 0;
}

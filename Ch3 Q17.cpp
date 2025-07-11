/*this program convert centigrade to fahrenheit.*/
#include<iostream>
using namespace std;
int main ( )
{
	//Local Declaration
	float centigrade;
	float fahrenheit;
	//Statements
	cout<<"Enter Temperature in centigrade:\n";
	cin>>centigrade;
	fahrenheit= 32+(centigrade *180/100);
	cout<<"Temperature in Fahrenheit:\n";
	cout<<fahrenheit;
	return 0;
}

#include<iostream>
using namespace std;
int main ( )
{
	//Local Declaration
	int x;
	int y;
	//Statements
	x=10;
	y=5;
	cout<<"x:"<<x<<"|"<<"y:"<<y<<"|"<<"x *=y:"<<(x *=y);
	cout<<"| x is Now:"<<x<<endl;
	cout<<"x:"<<x<<"|"<<"y:"<<y<<"|"<<"x /=y:"<<(x /=y);
	cout<<"| x is Now:"<<x<<endl;
	x=10;
	cout<<"x:"<<x<<"|"<<"y:"<<y<<"|"<<"x %=y:"<<(x %=y);
	cout<<"| x is Now:"<<x<<endl;
	return 0;
}

#include<iostream>
using namespace std;
int main ( )
{
	//Local Declaration
	int num1,num2,num3,num4,num5;
	//Statements
	cout<<"Enter any 5 Numbers:\n";
	cin>>num1>>num2>>num3>>num4>>num5;
	cout<<"Your Numbers in this form:\n";
	cout<<num1<<'\t'<<num2<<'\t'<<num3<<'\t'<<num4<<'\t'<<num5<<endl;
	cout<<num2<<'\t'<<num3<<'\t'<<num4<<'\t'<<num5<<endl;
	cout<<num3<<'\t'<<num4<<'\t'<<num5<<endl;
	cout<<num4<<'\t'<<num5<<endl;
	cout<<num5<<endl;
	return 0;
}

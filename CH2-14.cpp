/* The program show the constant in vowel, memory constants in even digits and literal constants in odd digits 
Wrtten by : Muhammad Bilal
Date      : 03 September 2022
*/
#include<iostream>
#include<conio.h>
#define vowel "a e i o u"
using namespace std;
int main()
{
	//Local Declaration
	const int a=0, b=2, c=4, d=6, e=8;
	//Statements
	cout<<"Define Constant:"<< vowel << endl;
	cout<<"Memory Constant:"<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<< endl;
	cout<<"Literal Constant:"<<1<<" "<<3<<" "<<5<<" "<<7<<" "<<9<< endl;
	return 0 ;
}

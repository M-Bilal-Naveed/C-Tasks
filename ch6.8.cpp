#include<iostream>
#include<iomanip>
const double PI = 3.141593;
using namespace std;
int main ( )
{
	int degree;
	degree=0;
	double radian;
	cout<<"DEGREE TO RADIAN\n";
	while(degree<=360)
	{
		radian = degree * PI / 180;
		degree += 10;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main ( )
{
	int a,x,r,sum;
	sum=0;
	cout<<"ENTER AN INTEGER:\n"<<endl;
	cin>>x;
	a = x;
	while( x != 0)
	{
		r = x % 10;
		if(r==0)
		sum=sum + x;
		else
		sum = sum + r;
		x = x / 10;
	}
	cout<<"sum of digits of"<<a<<"="<<sum<<endl;
	return 0;
}

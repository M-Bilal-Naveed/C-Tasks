#include<iostream>
using namespace std;
int main ( )
{
	int n,a;
	a = 1;
	cout<<"ENTER A NUMBER\n"<<endl;
	cin>>n;
	while(a<=10)
	{
		cout<<n<<"*"<<a<<"="<<n * a<<endl;
		a++;
	}
	return 0;
}

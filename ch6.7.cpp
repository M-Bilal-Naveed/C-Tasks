#include<iostream>
using namespace std;
int main ( )
{
	long int n ,a,f;
	a=1;
	f=1;
	cout<<"ENTER A NUMBER\n"<<endl;
	cin>>n;
	while(a<=n)
	{
		f=f * a;
		a++;
	}
    cout<<"FECTORIAL OF"<<n<<"is"<<f;
	return 0;
}

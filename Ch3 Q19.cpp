#include<iostream>
using namespace std;
int main ( )
{
	//Local Declaration
	int n, fib1=0, fib2=1, fib3=0;
	//Statements
	cout<<"Enter the number in this turms:\n";
	cin>>n;
	cout<<"Fibonacci Series:\n";
	for(int i=1; i<=n;i++){
		if(i==1){
			cout<<fib1<<",";
			continue;
		}
		if(i==2){
			cout<<fib2<<",";
			continue;
		}
		fib3=fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		cout<<fib3<<",";
	}
	return 0;
		}

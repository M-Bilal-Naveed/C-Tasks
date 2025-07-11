#include<iostream>
using namespace std;
int main ( )
{
	//Local Declaration
	float inches;
    float foot;
	float yard;
	float centimeter;
	float meter;
	//Statements
	cout<<"inches into foot:\n";
	cout<<"Enter inches:\n";
	cin>>inches;
	foot=(inches/12);
	cout<<"Foot="<<foot<<endl;
	
	cout<<"inches into yard:\n";
	cout<<"Enter Inches:\n";
	cin>>inches;
	yard=(inches/36);
	cout<<"Yard="<<yard<<endl;
	
	cout<<"inches into centimeter:\n";
	cout<<"Enter inches:\n";
	cin>>inches;
	centimeter= (2.54*inches);
	cout<<"Centimeter="<<centimeter<<endl;
	
	cout<<"inches into meter:\n";
	cout<<"Enter inches:\n";
	cin>>inches;
	meter=(inches/39.37);
	cout<<"Meter="<<meter<<endl;
	return 0;	
}

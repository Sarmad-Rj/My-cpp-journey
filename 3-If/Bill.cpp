#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter Your Electicity Units: ";
	cin>>a;
	if ( a>=0 && a<=50 )
	{
		b = a * 0.50 ;
		c = b * 20 / 100 ;
		d = b + c ;
		cout<<"Bill is: "<<d;
	}
	else if ( a>=51 && a<=100 )
	{
		b = a * 0.75 ;
		c = b * 20 / 100 ;
		d = b + c ;
		cout<<"Bill is: "<<d;
	}
	else if ( a>=101 && a<=200 )
	{
		b = a * 1.20 ;
		c = b * 20 / 100 ;
		d = b + c ;
		cout<<"Bill is: "<<d;
	}
	else if ( a>=200 )
	{
		b = a * 1.50 ;
		c = b * 20 / 100 ;
		d = b + c ;
		cout<<"Bill is: "<<d;
	}
	else 
	{
		cout<<"Invalid";
	}
}

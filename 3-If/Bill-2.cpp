#include <iostream>
using namespace std;
int main()
{
	float a,b,c,d,e,f,g,Pers,total;
	cout<<"Enter Your Electicity Units: ";
	cin>>a;
	if ( a>=0 && a<=50 )
	{
		b = a * 0.50 ;
		c = b * 20 / 100 ;
		d = b + c ;
		cout<<"Bill is: "<<d;
	}
	else if ( a>=51 && a<=150 )
	{
		b = 25;
		c = a - 50;
		d = c * 0.75;
		e = b + d;
		Pers = e * 20 / 100;
		total = e + Pers;
		cout<<"Bill is: "<<total;
	}
	else if ( a>=151 && a<=250 )
	{
		b = 25;
		c = 75;
		d = a - 150;
		e = d * 1.20;
		f = b + c + e;
		Pers = f * 20 / 100;
		total = f + Pers;
		cout<<"Bill is: "<<total;
	}
	else if ( a>=251 )
	{
		b = 25 ;
		c = 75 ;
		d = 120 ;
		e = a - 250 ;
		f = e * 1.50 ;
		g =  b + c + d + f ;
		Pers = g * 20 / 100;
		total = g + Pers;
		cout<<"Bill is: "<<total;
	}
	else 
	{
		cout<<"Invalid";
	}
}

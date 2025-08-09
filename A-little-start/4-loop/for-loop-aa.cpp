#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter any number to find Factorial: ";
	cin>>a;
//	c = 40*39*38*37*36*35*34*33*32*31*30*29*28*27*26*25*24*23*22*21*20*19*18*17*16*15*14*13*12*11*10*9*8*7*6*5*4*3*2*1;
	if (a>0)
	{
		for ( b=1 ; b<=a; b++)
		{
			c *= b;
		}
		cout<<"Factorial is "<<c;
	}
	else 
	{
		cout<<"Invalid";
	}
	
}

#include <iostream>
using namespace std;
int main()
{
	int a,b,c,give,d,e,f,g;
	cout<<"Enter Your Grade: ";
	cin>>a;
	if (a=16)
	{
		cout<<"Enter Your Salary: ";
		cin>>b;
		if ( b>= 18000 && b<=20000 )
		{
			cout<<"Enter Your working days: ";
			cin>>c;
			if (c<=30 && c>=0)
			{
				give = b * c / 30;
				cout<<"Your salary is: Rs"<< give<<endl;
				cout<<"Enter how many years do you want to work here: ";
				cin>>d;
				e = give*d;
				cout<<"Your Salar in"<<d<<" years is: Rs"<<e<<endl;
				cout<<"Enter Your bonus: ";
				cin>>f;
				g = e + e / f;
				cout<<"Your bonus on Salar in "<<d<<" is: Rs "<<g;				
			}	
			else
			{
				cout<<"Invalid";
			}	
		}
		else 
		{
			cout<<"Invalid";
		}
	}
	else if (a=17)
	{
		cout<<"Enter Your Salary: ";
		cin>>b;
		if ( b>= 22000 || b<=25000 )
		cout<<"Enter Your working days: ";
	}
	else if (a=18)
	{
		cout<<"Enter Your Salary: ";
		cin>>b;
		if ( b>= 30000 || b<=45000 )
		cout<<"Enter Your working days: ";
	}	
	else
	{
		cout<<"Invalid";
	}
}

#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter the number of workers: ";
	cin>>a;
	b = 30;
	if (a>0 && a<=30)
	{
		if (a>0 && a<=30)
		{
				c = 30-a;
            	d = b+c;
			cout<<d<<" days will take to complete the work.";
		}
		else
		{
			cout<<"Invalid";
		}
	}
	else if ( a>30 && a< 60)
	{
		if ( a>30 && a< 60)
		{
			c = 30-a;
			d = b+c;
			cout<<d<<" days will take to complete the work.";
		}
		else
		{
			cout<<"Invalid";
		}	
	}
	else if ( a>=60 && a<=80)
	{
	 	cout<<"1 days will take to complete the work.";
	}
	else
	{
		cout<<"Invalid";
	}
}

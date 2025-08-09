#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the 1st number: ";
	cin>>a;
	cout<<"Enter the 2nd number: ";
	cin>>b;	
	cout<<"Enter the 3rd number: ";
	cin>>c;
	switch (a>b&&a>c)
	{
		case 1:
		{
			cout<<"A is maximum";
		}
		break;
		case 0:
		{
	    	switch(b>a&&b>c)
	    	{
	    		case 1:
	    			{
	    				cout<<"B is maximum";
					}
					break;
					case 0:
						{
							cout<<"C is maximum";
						}
			}
		}
		break;
	}
}

#include <iostream>
using namespace std;
int main ()
{
	int a,b,e, c=0;
	cout<<"Enter any number to check if it is prime or not: ";
	cin>>a;
	
	for (b=2; b<=a; b++)
	{
		for (e=2 ; e<=b; e++)
		{
			if (b%e==0) break;
	    }
	    if (e > (b/e))
	    {
	    	c++;
	    	cout<<b<<"   ";
		}
	}
	cout<<" Total: "<<c;
}

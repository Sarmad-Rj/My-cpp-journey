#include<iostream>
using namespace std;
int main ()
{
	int a=0,b=1,c,input,e;
	cout<<"Enter Number: ";
	cin>>input;
	e = input-2;
	if ( e > 0 )
	{
		cout<<a<<"  "<<b<<"  ";
		for (int d=1; d<=e; d++)
		{
			c = a+b;	
			a = b;
			b = c;
			cout<<c<<"  ";
		}
	}
	else if ( input == 1  )
	{
		cout<<a<<" ";
	}
	else if ( input == 2 )
	{
		cout<<a<<"  "<<b<<"  ";
	}
	else if ( input == 0 )
	{
		cout<<" ";
	}
	else 
	{
		cout<<"Invalid";
	}
	return 0;
}

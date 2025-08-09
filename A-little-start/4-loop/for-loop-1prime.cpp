#include <iostream>
using namespace std;
int main ()
{
	int a,b,c=0;
	cout<<"Enter any number to check if it is prime or not: ";
	cin>>a;
	
	for (b=2; b<=a; b++)
	{
		if (a%b==0)
		{
			c++;
		}
	}
	if (c==1)
	{
		cout<<a<<" is a prime number.";
	}
	else
	{
		cout<<a<<" is not a prime number.";
 	}
}

#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the number: ";
	cin>>a;	
	for ( int b=1; b<=a; b++ )
	{
		cout<<"*";
		for ( int c=1; c<b; c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

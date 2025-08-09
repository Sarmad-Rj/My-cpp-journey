#include <iostream>
using namespace std;
int main()
{
	for ( int b=1; b<=7; b++ )
	{
		cout<<"*";
		for ( int c=1; c<b; c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

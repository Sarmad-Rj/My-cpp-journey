#include <iostream>
using namespace std;
int main()
{ 
	int x;
	cout<<"Enter: ";
	cin>>x;
	
	for (int b=x; b>=1; b--)
	{
		for (int c=1; c<=x; c++)
		{
			cout<<" ";
			if ( c<=b || b%2==0)
			{
				
			}
			else
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}


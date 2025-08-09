#include <iostream>
using namespace std;
int main()
{ 
	int x;
	cout<<"Enter: ";
	cin>>x;
	
	for (int b=x; b>=0; b--)
	{
		for (int c=0; c<=x; c++)
		{
			if (c<=b)
			{
				cout<<" ";
			}
			else
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}


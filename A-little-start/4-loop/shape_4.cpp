#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter: ";
	cin>>x;
	
	for (int a=0; a<=x; a++)
	{
		for (int b=0; b<=x; b++)
		{
			if (b<=a)
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

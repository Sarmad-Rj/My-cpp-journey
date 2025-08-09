#include <iostream>
using namespace std;
int main()
{ 
	int x,y;
	cout<<"Enter: ";
	cin>>x;
	
	for (int a=x; a>=1; a--)
	{
		for (int b=1; b<=x+x-1; b++)
		{	
		    
			if (b<=a || a>=x)
			{
				cout<<"-";
			}
			else
			{
				cout<<"x";
			}
		}
		cout<<endl;
	}
}


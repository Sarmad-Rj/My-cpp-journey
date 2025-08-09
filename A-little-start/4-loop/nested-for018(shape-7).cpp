#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter: ";
	cin>>x;
	
	for ( int b=x; b>=1; b-- )
	{
		cout<<" *";
		for ( int c=1; c<b; c++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
	
}

#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter: ";
	cin>>x;
	
	for ( int i=x; i>=1; i-- )
	{
		for (int k=x-i; k>=1; k-- )
		
			cout<<"  ";
			for (int j=x-i; j<=i; j++ )
			{
				cout<<" *";
			}
			cout<<endl;
		
	}
}

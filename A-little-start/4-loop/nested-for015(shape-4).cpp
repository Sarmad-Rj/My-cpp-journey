#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter: ";
	cin>>x;
	
	for ( int i=1; i<=x; i++ )
	{
		for (int k=x-i; k>0; k-- )
		
			cout<<"  ";
			for (int j=x-i; j<=i; j++ )
			{
				cout<<" *";
			}
			cout<<endl;
		
	}
}

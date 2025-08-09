#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter rows: ";
	cin>>a;
	cout<<"Enter Columns: ";
	cin>>b;
	
	for (int r=b; r>=1; --r)
	{
		for (int c=a; c>=1; --c)
		{
			cout<<c;
		}
		cout<<r<<endl;
	}
}

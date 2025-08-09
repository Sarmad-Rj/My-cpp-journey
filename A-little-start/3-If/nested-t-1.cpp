#include <iostream>
using namespace std;
int main()
{
	string a, b;
	cout<<"Enter Student Name: ";
	cin>>a;
	cout<<"Enter Student Class: ";
	cin>>b;
	if ( a == "Ahmad" )
	{
		if ( b == "11th")
		{
			cout<<"Father name is Kashif.";
		}
		else if ( b == "12th")
		{
			cout<<"Father name is Bilal.";
		}
		else
		{
			cout<<"Data not available.";
		}
	}
	else 
	{
		cout<<"Data not available.";
	}
}

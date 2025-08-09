#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the number: ";
	cin>>a;
	if(a<=100)
	{
		cout<<"V.Poor";
	}
	else if(a<=800)
	{
		cout<<"Poor";
	}
	else if(a<=2000)
	{
		cout<<"Rich";
	}
	else
	{
		cout<<"Invalid";
	}
}

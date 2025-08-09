#include <iostream>
using namespace std;
int main()
{
	int a, b, give;
	cout<<"Enter Your Salary: ";
	cin>>a;
	cout<<"Enter Your W-Days: ";
	cin>>b;
	if (b<=30 && b>=0)
	{
		give = a / 30 * b;
		cout<<"Your salary is: "<< give;
	}
	else
	{
		cout<<"Invalid";
	}
}

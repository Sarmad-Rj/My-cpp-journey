#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Find out if the value is odd or even?"<<endl;
	cout<<"Enter your value: ";
	cin>>a;
	if(a%2==0)
	{
		cout<<"Your given number is even.";
//		cout<<a<<" is even.";
	}
	else
	{
		cout<<"Your given number is odd.";
//		cout<<a<<" is odd.";
	}
}

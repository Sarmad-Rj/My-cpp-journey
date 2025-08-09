#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Find if Your given age is Teenage or not."<<endl;
	cout<<"Enter The Age: ";
	cin>>a;
	if (a>=13 && a<=19)
	{
		cout<<a<<" is Teenage";
	}
	else
	{
		cout<<a<<" is not Teenage";
	}
}

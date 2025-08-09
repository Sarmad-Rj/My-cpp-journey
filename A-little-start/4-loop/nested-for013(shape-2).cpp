#include <iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Enter: ";
	cin>>i;
	for (int a=1; a<=i; a++)
	{
		for (int b=i-a; b>0; b--)
		{
			cout<<"  ";
		}
		for (int c=1; c<=a; c++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
}

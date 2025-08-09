#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout<<"Find which value is minimum."<<endl;
	cout<<"Enter the first value: ";
	cin>>a;
	cout<<"Enter the second value: ";
	cin>>b;
	cout<<"Enter the third value: ";
	cin>>c;
	d = a;
	if (b<d)
	d = b;
	if (c<d)
	d = c;
	cout<<"Minimum value is: "<<d;
	
}

#include <iostream>
using namespace std;
int main()
{
	int a, b, give;
	cout<<"Enter Your Salary: ";
	cin>>a;
	cout<<"Enter Your W-Days: ";
	cin>>b;
	give = a / 30 * b;
	cout<<"Salary according to W-Days: "<< give;
	
}

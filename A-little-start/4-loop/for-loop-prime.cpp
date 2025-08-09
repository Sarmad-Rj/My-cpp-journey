#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number: ";
	cin>>n;
	for (int a=1; a<=100; a++)
	{
		if(n%a==1)
		{
			cout<<"It is a prime number."<<endl;
		}
		else 
		{
			cout<<"It is not a prime number."<<endl;
		}	
	}
}

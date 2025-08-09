#include <iostream>
using namespace std;
int main()
{
//	(a+b+c)2
	int a, b, c, ans;
	cout<<"Find 'a plus b plus c, whole squared'."<<endl;
	cout<<"Enter The First Value: ";
	cin>>a;
	cout<<"Enter The Second Value: ";
	cin>>b;
	cout<<"Enter The Third Value: ";
	cin>>c;
    ans = (a*a) + (b*b) + (c*c) + (2*a*b) + (2*b*c) + (2*c*a);
	cout<<"The answer is: "<< ans;
}


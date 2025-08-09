#include <iostream>
using namespace std;
int main()
{
//	(a+b)2
	int a, b, ans;
	cout<<"Find 'a plus b whole square'."<<endl;
	cout<<"Enter The First Value: ";
	cin>>a;
	cout<<"Enter The Second Value: ";
	cin>>b;
    ans = a*a + b*b + 2*a*b ;
	cout<<"The answer is: "<< ans;
}

#include <iostream>
using namespace std;
int main()
{
//	(a+b)3
	int a, b, ans;
	cout<<"Find 'a plus b cubed'."<<endl;
	cout<<"Enter The First Value: ";
	cin>>a;
	cout<<"Enter The Second Value: ";
	cin>>b;
//1 ans = (a+b)*(a+b)*(a+b);
//2	a = a+b;
//	ans = a*a*a;
    ans = (a*a*a) + 3*(a*a)*b + 3*a*(b*b) +(b*b*b) ;
	cout<<"The answer is: "<< ans; 
}

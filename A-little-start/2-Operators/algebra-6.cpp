#include <iostream>
using namespace std;
int main()
{
//	a3+b3
	int a, b, c, d, ans;
	cout<<"Find 'a cubed plus b cubed'."<<endl;
	cout<<"Enter The First Value: ";
	cin>>a;
	cout<<"Enter The Second Value: ";
	cin>>b;
    c = (a+b);
    d = (a*a) - (a*b) + (b*b);
    ans = c*d;
	cout<<"The answer is: "<< ans;
}


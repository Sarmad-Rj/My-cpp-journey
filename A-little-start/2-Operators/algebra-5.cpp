#include <iostream>
using namespace std;
int main()
{
//	(a-b)3	
	int a, b, ans;
	cout<<"Find 'a minus b cubed'."<<endl;
	cout<<"Enter The First Value: ";
	cin>>a;
	cout<<"Enter The Second Value: ";
	cin>>b;
    ans = (a*a*a) - 3*(a*a)*b + 3*a*(b*b) - (b*b*b) ;
	cout<<"The answer is: "<< ans; 
}

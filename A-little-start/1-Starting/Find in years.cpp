#include <iostream>
using namespace std;
int main()
{
	int a, day, hour, min, sec;
	cout<<"Find out Day, Hours, Minutes and Seconds in your given Years."<<endl;
	cout<<"Enter Years ";
	cin>>a;
	day = a * 365;
	hour = day * 24;
	min = hour * 60;
	sec = min * 60;
	cout<<"Days in your given years: "<< day<<endl;
	cout<<"Hours in your given years: "<< hour<<endl;
	cout<<"Minutes in your given years: "<< min<<endl;
	cout<<"Seconds in your given years: "<< sec<<endl;
}

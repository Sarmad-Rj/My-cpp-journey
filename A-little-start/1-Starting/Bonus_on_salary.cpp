#include <iostream>
using namespace std;
int main ()
{
	int a, year, bonus;
	cout<<"Find out your salary bonus per year."<<endl;
	cout<<"Enter your salary: ";
	cin>>a;
	year = a*12 ;
	bonus = year + year/10;
	cout<<"Your salary of year is: "<<year<<endl;
	cout<<"10% Bonus on salary is: "<<bonus; 
}

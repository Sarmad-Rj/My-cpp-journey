#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the number of day: ";
	cin>>a;
	switch (a)
	{
		case 1:
		{
			cout<<"1st day of the weeok is Monday";
		}
		break;
		case 2:
		{
			cout<<"2nd day of the weeok is Tuesday";
		}
		break;
		case 3:
		{
			cout<<"3rd day of the weeok is Wednesday";
		}
		break;
		case 4:
		{
			cout<<"4th day of the weeok is Thursday";
		}
		break;
		case 5:
		{
			cout<<"5th day of the weeok is Friday";
		}
		break;
		case 6:
		{
			cout<<"6th day of the weeok is Saturday";
		}
		break;
		case 7:
		{
			cout<<"7th day of the weeok is Sunday";
		}
		break;
		default:
		{
			cout<<"Invalid Days";
		}
	}
}

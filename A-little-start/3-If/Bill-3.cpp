#include <iostream>
using namespace std;
int main()
{
	float units, total, Rs ;
	cout<<"Enter Units: ";
	cin>>units;
	if ( units<=0 )
	{
		cout<<"Invalid"<<endl;
	}
	else if ( units>0 && units<=50 )
	{
		Rs = units * 0.50;
	}
	else if ( units<=150 )
	{
		Rs = 25 + ((units-50)*0.75);
	}
	else if ( units<=250 )
	{
		Rs = 100 + ((units-150)*1.20);
	}
	else if ( units>250)
	{
		Rs = 220 + ((units-250)*1.50);
	}
	else 
	{
		cout<<"invalid";
	}
	
	total = (Rs * 0.20) + Rs;
	cout<<"Your Bill is "<<total<<" Rs";
}

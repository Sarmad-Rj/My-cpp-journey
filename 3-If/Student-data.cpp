#include <iostream>
using namespace std;
int main()
{
	char name;
	cout<<"Student Data"<<endl;
	cout<<"Enter the student name: ";
	cin>>name;
	if ( name == 'Sarmad' )
	{
		cout<<"Age: 19"<<endl;
		cout<<"Father name is: Liaqat Ali";
	}
	else if ( name == 'Usman')
	{
		cout<<"Father name is: Anwar";
	}
	else if ( name == 'Awais' || name == 'Abdullah')
	{
		cout<<"Age: 19"<<endl;
		cout<<"Father name is: Muhammad Riaz";
	}
	else if ( name == 'Furqan')
	{
		cout<<"Father name is: Ramzan";
	}
	else if ( name == 'Irfan' || name == 'Safder')
	{
		cout<<"Age: 20"<<endl;
		cout<<"Father name is: Mustafa";
	}
	else if ( name == 'Adeel')
	{
		cout<<"Father name is: Azhar Hussain";
	}
	else if ( name == 'Ahab')
	{
		cout<<"Age: 18"<<endl;
		cout<<"Father name is: Shakeel";
	}
	else if ( name == 'Muneeb')
	{
		cout<<"Father name is: Muhammad Arshad";
	}
	else if ( name == 'Ahmad')
	{
		cout<<"Father name is: Nasir";
	}
	else if ( name == 'Usama')
	{
		cout<<"Father name is: Muhammad Abdul-Jalil";
	}
	else if ( name == 'Umair')
	{
		cout<<"Age: 20"<<endl;
		cout<<"Father name is: Muhammad Saddique";
	}
	else if ( name == 'Ali Ejaz')
	{
		cout<<"Age: 24"<<endl;
		cout<<"Father name is: Faiz Hassan";
	}
	else if ( name == 'Shahzaib')
	{
		cout<<"Age: 18"<<endl;
		cout<<"Father name is: Shahnawaz";
	}
	else if ( name == 'Waqas')
	{
		cout<<"Age: 18"<<endl;
		cout<<"Father name is: Muhammad Naeem";
	}
	else if ( name == 'Ahmad Ali')
	{
		cout<<"Age: 20"<<endl;
		cout<<"Father name is: Allah Rakha";
	}
	else 
	{
		cout<<"Your given Name is not in data.";
	}
	
}

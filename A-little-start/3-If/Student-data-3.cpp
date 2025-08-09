#include <iostream>
using namespace std;
int main()
{
	char name;
	cout<<"Student Data"<<endl;
	cout<<"Enter the student name: ";
	cin>>name;
	if ( name == 'S' && 'a' && 'r' && 'm' && 'a' && 'd' )
	{
		cout<<"Age: 19"<<endl;
		cout<<"Father name is: Liaqat Ali";
	}
	else if ( name == 'U'  && 's' && 'm' && 'a' && 'n')
	{
		cout<<"Father name is: Anwar";
	}
	else if ( name == 'A' && 'w' && 'a' && 'i' && 's' || name == 'A' && 'b' && 'd' && 'u' && 'l' && 'l' && 'a' && 'h' )
	{
		cout<<"Age: 19"<<endl;
		cout<<"Father name is: Muhammad Riaz";
	}
	else if ( name == 'F'&& 'u' && 'r' && 'q' && 'a' && 'n' )
	{
		cout<<"Father name is: Ramzan";
	}
	else if ( name == 'I' && 'r' && 'f' && 'a' && 'n' || name == 'S' && 'a' && 'f' && 'd' && 'e' && 'r')
	{
		cout<<"Age: 20"<<endl;
		cout<<"Father name is: Mustafa";
	}
	else if ( name == 'A' && 'd' && 'e' && 'e' && 'l')
	{
		cout<<"Father name is: Azhar Hussain";
	}
	else if ( name == 'A' && 'h' && 'a' && 'b')
	{
		cout<<"Age: 18"<<endl;
		cout<<"Father name is: Shakeel";
	}
	else if ( name == 'M' && 'u' && 'n' && 'e' && 'e' && 'b' )
	{
		cout<<"Father name is: Muhammad Arshad";
	}
	else if ( name == 'A' && 'h' && 'm' && 'a' && 'd')
	{
		cout<<"Father name is: Nasir";
	}
	else if ( name == 'U' && 's' && 'a' && 'm' && 'a')
	{
		cout<<"Father name is: Muhammad Abdul-Jalil";
	}
	else if ( name == 'U' && 'm' && 'a' && 'i' && 'r')
	{
		cout<<"Age: 20"<<endl;
		cout<<"Father name is: Muhammad Saddique";
	}
	else if ( name == 'Al' && 'l' && 'i')
	{
		cout<<"Age: 24"<<endl;
		cout<<"Father name is: Faiz Hassan";
	}
	else if ( name == 'S' && 'h' && 'a' && 'h' && 'z' && 'a' && 'i' && 'b')
	{
		cout<<"Age: 18"<<endl;
		cout<<"Father name is: Shahnawaz";
	}
	else if ( name == 'W' && 'a' && 'q' && 'a' && 's')
	{
		cout<<"Age: 18"<<endl;
		cout<<"Father name is: Muhammad Naeem";
	}
	else 
	{
		cout<<"Your given Name is not in data.";
	}
	
}

#include <iostream>
using namespace std;
int main()
{
	char name;
	cout<<"Student Data"<<endl;
	cout<<"Enter the student name: ";
	cin>>name;
//	if ( name == 'Sarmad' )
	if ( name == 'S' && 'a' && 'r' && 'm' && 'a' && 'd' )
	{
	    cout<<"Age: 19"<<endl;
		cout<<"Father name is: Liaqat Ali";
	}
//	else if ( name == 'U','s','m','a','n')
//	else if ( name == 'U' && name == 's' && name == 'm' && name == 'a' && name == 'n')
//  else if ( name == 'U,s,m,a,n')
//    else if ( name == 'U'  && 's' && 'm' && 'a' && 'n' )
	{
		cout<<"Father name is: Anwar";
	}
	else 
	{
		cout<<"Your given Name is not in data.";
	}
}

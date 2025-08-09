  #include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the 1st number: ";
	cin>>a;
 
	switch (a<0 || a>2000)
	{
		case 1:
			{
				cout<<"Invalid";
			}
		break;
	}
	switch (a>=0 && a<=100)
	{
		case 1:
			{
				cout<<"V.Poor";
			}
		break;
	}
	switch (a>100 && a<=800)
	{
		case 1:
			{
				cout<<"Poor";
			}
		break;
	}
	switch (a>800 && a<=2000)
	{
		case 1:
			{
				cout<<"Rich";
			}
		break;
	}
}

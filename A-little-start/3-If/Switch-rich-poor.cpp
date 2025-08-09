#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter Amount: ";
	cin>>a;
	switch (a<0 || a>2000)
	{
		case 1:
			{
				cout<<"Invalid";
			}
		break;
		case 0:
			{
				switch ( a>=0 && a<=100 )
				{
					case 1:
						{
							cout<<"V.Poor";
						}
					break;
					case 0:
						{
							switch ( a>100 && a<=800 )
							case 1:
								{
									cout<<"Poor";
								}
							break;
							case 0:
								{
									switch ( a>800 && a<=2000 )
									case 1:
										{
											cout<<"Rich";
										}
									break;
									case 0:
										{
											cout<<"Invalid";
										}
									break;
								}
							break;
						}
					break;
				}
			}
		break;
	}
}

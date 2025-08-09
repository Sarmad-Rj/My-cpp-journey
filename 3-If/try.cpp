  #include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the 1st number: ";
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
	    	switch(a>=0 && a<=100)
	    	{
	    		case 1:
	    			{
	    				cout<<"V.poor";
					}
				break;
				case 0:
					{
						switch(a>100&&a<=800)
						case 1:
							{
								cout<<"Poor";
							}
						break;
						case 2:
							{
								switch(a>800 && a<=2000)
								case 1:
									{
										cout<<"Rich";
									}
								break;
								case 2:
									{
										cout<<"Invalid";
									}
							}
						break;
					}
				break;
					 
			}
					 
		}
		break;		
	}

}


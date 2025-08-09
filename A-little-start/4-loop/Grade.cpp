#include <iostream>
using namespace std;
int main()
{
	int grade,salary,wdays,mgive,years,ygive,a,b,months,tmonths,c,d;
	cout<<"If You want to know about your salary according to months and about how many years you gonna work here then Select Your Grade."<<endl;
	cout<<"1: Grade 16 (18k to 20k)"<<endl;
	cout<<"2: Grade 17 (20k to 25k)"<<endl;
	cout<<"3: Grade 18 (25k to 30k)"<<endl;
	cout<<"\nEnter Your Selection: ";
	cin>>grade;
	switch (grade)
	{
		case 1:
			{
				cout<<"Enter Your Salary: ";
				cin>>salary;
				
				if ( salary>=18000 && salary<=20000)
				{
					cout<<"Enter Your working days: ";
					cin>>wdays;
					if (wdays<=30 && wdays>=0)
					{
						mgive = salary * wdays / 30;
						cout<<"Your salary is: Rs"<<mgive<<endl;
						cout<<"\nIf You further wanna know about salary calculation, Choose the best option that defines You the best.";
						cout<<"\n1: Calculate Salary For Months.";
						cout<<"\n2: Calculate Salary For Years With Bonus.";
						cout<<"\n3: End Program."<<endl;
						cout<<"\nEnter: ";
						cin>>b;
						switch (b)
						{
							case 1:
								{
									cout<<"Enter How many months do you want to work here: ";
									cin>>months;
									if ( months>=0 && months<=12)
									{
										tmonths = salary*months;
										cout<<"As You told Your monthly salary is "<<salary<<" ,So Your Salary in months "<<months<<" will be: "<<tmonths;
									}
									else if ( months>12 )
									{
										cout<<"Meray Bhai Ager 12+ months hi calculate krwana tha to years choose krta :) , itni sense to honi chahia ha na :)";
									}
									else
									{
										cout<<"Sorry You can only calculate for 1 to 12 months!";
									}
								}
							break;
							case 2:
								{
									cout<<"Enter how many years do you want to work here: ";
									cin>>years;
									if ( years>0 && years<=5)
									{
										for ( b=1; b<=years; b++ )
										{
											a = salary*b*12;
											c = a * (5+(b*5)) / 100;
											d = a + c;
											cout<<"Your Salar in "<<b<<" years is: Rs"<<a<<". and with "<<5+(b*5)<<"% bonus, it is: "<<d<<"."<<endl;
											
										}
										if ( years==5)
										{
											cout<<"After that Congradulations because You'll be promoted to Grade 17th.";	
										}	
									}
									else
									{
										cout<<"Sorry You can only work for 1 to 5 years in Grade 16 and then You'll be promoted to Grade 17th.";
									}
								}
							break;
							case 3:
								{
									cout<<"\nEnded...   ";
								}
							break;
							default:
								{
									cout<<"Invalid number!";
								}
						}				
					}	
					else
					{
						cout<<"Invalid days";
					}
				}
				else
				{
					cout<<"\nInvalid Salary.";
					cout<<"\nNote: Salary must be 18k to 20k (for 16th Grade)";	
				}
			}
		break;
		case 2:
			{
				cout<<"Enter Your Salary: ";
				cin>>salary;
				
				if ( salary>20000 && salary<=25000)
				{
					cout<<"Enter Your working days: ";
					cin>>wdays;
					if (wdays<=30 && wdays>=0)
					{
						mgive = salary * wdays / 30;
						cout<<"Your salary is: Rs"<<mgive<<endl;
						cout<<"\nIf You further wanna know about salary calculation, Choose the best option that defines You the best.";
						cout<<"\n1: Calculate Salary For Months.";
						cout<<"\n2: Calculate Salary For Years With Bonus.";
						cout<<"\n3: End Program."<<endl;
						cout<<"\nEnter: ";
						cin>>b;
						switch (b)
						{
							case 1:
								{
									cout<<"Enter How many months do you want to work here: ";
									cin>>months;
									if ( months>=0 && months<=12)
									{
										tmonths = salary*months;
										cout<<"As You told Your monthly salary is "<<salary<<" ,So Your Salary in months "<<months<<" will be: "<<tmonths;
									}
									else if ( months>12 )
									{
										cout<<"Meray Bhai Ager 12+ months hi calculate krwana tha to years choose krta :) , itni sense to honi chahia ha na :)";
									}
									else
									{
										cout<<"Sorry You can only calculate for 1 to 12 months!";
									}
								}
							break;
							case 2:
								{
									cout<<"Enter how many years do you want to work here: ";
									cin>>years;
									if ( years>0 && years<=5)
									{
										for ( b=1; b<=years; b++ )
										{
											a = salary*b*12;
											c = a * (5+(b*5)) / 100;
											d = a + c;
											cout<<"Your Salar in "<<b<<" years is: Rs"<<a<<". and with "<<5+(b*5)<<"% bonus, it is: "<<d<<"."<<endl;
											
										}
										if ( years==5)
										{
											cout<<"After that Congradulations because You'll be promoted to Grade 18th.";	
										}	
									}
									else
									{
										cout<<"Sorry You can only work for 1 to 5 years in Grade 17 and then You'll be promoted to Grade 18th.'";
									}
								}
							break;
							case 3:
								{
									cout<<"\nEnded...   ";
								}
							break;
							default:
								{
									cout<<"Invalid number!";
								}
						}				
					}	
					else
					{
						cout<<"Invalid days";
					}
				}
				else
				{
					cout<<"\nInvalid Salary.";
					cout<<"\nNote: Salary must be 20k to 25k (for 17th Grade)";	
				}	
			}
		break;
		case 3:
			{
				cout<<"Enter Your Salary: ";
				cin>>salary;
				
				if ( salary>25000 && salary<=30000)
				{
					cout<<"Enter Your working days: ";
					cin>>wdays;
					if (wdays<=30 && wdays>=0)
					{
						mgive = salary * wdays / 30;
						cout<<"Your salary is: Rs"<<mgive<<endl;
						cout<<"\nIf You further wanna know about salary calculation, Choose the best option that defines You the best.";
						cout<<"\n1: Calculate Salary For Months.";
						cout<<"\n2: Calculate Salary For Years With Bonus.";
						cout<<"\n3: End Program."<<endl;
						cout<<"\nEnter: ";
						cin>>b;
						switch (b)
						{
							case 1:
								{
									cout<<"Enter How many months do you want to work here: ";
									cin>>months;
									if ( months>=0 && months<=12)
									{
										tmonths = salary*months;
										cout<<"As You told Your monthly salary is "<<salary<<" ,So Your Salary in months "<<months<<" will be: "<<tmonths;
									}
									else if ( months>12 )
									{
										cout<<"Meray Bhai Ager 12+ months hi calculate krwana tha to years choose krta :) , itni sense to honi chahia ha na :)";
									}
									else
									{
										cout<<"Sorry You can only calculate for 1 to 12 months!";
									}
								}
							break;
							case 2:
								{
									cout<<"Enter how many years do you want to work here: ";
									cin>>years;
									if ( years>0 && years<=5)
									{
										for ( b=1; b<=years; b++ )
										{
											a = salary*b*12;
											c = a * (5+(b*5)) / 100;
											d = a + c;
											cout<<"Your Salar in "<<b<<" years is: Rs"<<a<<". and with "<<5+(b*5)<<"% bonus, it is: "<<d<<"."<<endl;
											
										}
										if ( years==5)
										{
											cout<<"After that Congradulations because You'll be retired";	
										}	
									}
									else
									{
										cout<<"Sorry You can only work for 1 to 5 years in Grade 18and then You'll be retired.";
									}
								}
							break;
							case 3:
								{
									cout<<"\nEnded...   ";
								}
							break;
							default:
								{
									cout<<"Invalid number!";
								}
						}				
					}	
					else
					{
						cout<<"Invalid days";
					}
				}
				else
				{
					cout<<"\nInvalid Salary.";
					cout<<"\nNote: Salary must be 25k to 30k (for 18th Grade)";	
				}
			}
		break;
		default:
			{
				cout<<"Invalid Grade.";
			}
	}
}

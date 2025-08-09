#include <iostream>
using namespace std;
int main()
{
	int a,b,b1;
	cout<<"Type 786 for Jazzcash..."<<endl;
	cout<<"Type: ";
	cin>>a;

	switch (a)
	{
		case 786:
			{
				cout<<"1:Send Money "<<endl;
    		    cout<<"2:Pay Bills "<<endl;
			    cout<<"3:Mobile Load & Bundles "<<endl;
				cout<<"4:Ready Cash "<<endl;
				cout<<"5:Payments "<<endl;
				cout<<"6:My Accounts "<<endl;
				cout<<"7:Saving and insurance "<<endl;
				cout<<"8:Cancel"<<endl;
				cout<<"\nEnter: ";
				cin>>a;
				
				switch (a)
				{
					case 1:
			    	{
						cout<<"1:To Mobile Account"<<endl;
    		  		    cout<<"2:To CNIC"<<endl;
			  		    cout<<"3:To Bank"<<endl;
					    cout<<"4:To Rast"<<endl;
						cout<<"5:My Favourit"<<endl;
						cout<<"6:Cancel"<<endl;
						cout<<"\nEnter: ";
						cin>>a;				
						switch (a)
						{
							case 1: 
								cout<<"1:To JazzCash"<<endl;
    		 				    cout<<"2:To Easypaisa"<<endl;
			 				    cout<<"3:To Upaisa"<<endl;
								cout<<"4:Cencel Transaction"<<endl;
								cout<<"\nEnter: ";
			    				cin>>a;
			    				switch (a)
			    				{
			    					case 1:
			    						cout<<"Enter Receiver JazzCash Account"<<endl;
    		 				            cout<<"1: Number (11 digits)"<<endl;
    		 				            cout<<"2: Cencel."<<endl;
    		 				            cout<<"\nEnter: ";
			    			        	cin>>a;
			    			        	switch (a)
			        			    	{
			         				   		case 1:
			        		    			{
			        		    				cout<<"Thnxs for reachng till here.";
											}
											break;
											case 2:
											{
												cout<<"Thnxs for reachng till here.";
											}
											break;
											default:
											{
												cout<<"Invalid Number";
											}
										}
									break;
									case 2:
										{
    		 				            	cout<<"1: Enter Receive Easypaisa Number (11 digits)"<<endl;
    		 				                cout<<"2: Cencel."<<endl;
    		 				        	    cout<<"\nEnter: ";
			    			        		cin>>a;
			    			        		switch (a)
			        			    		{
			         					   		case 1:
			        		    				{
			        		    					cout<<"Thnxs for reachng till here.";
												}
												break;
												case 2:
												{
													cout<<"Thnxs for reachng till here.";
												}
												break;
												default:
												{
													cout<<"Invalid Number";
												}
											}
										}
									break;
									case 3:
										{
											cout<<"1: Enter Receive Upaisa Number (11 digits)"<<endl;
    		 				                cout<<"2: Cencel."<<endl;
    		 				        	    cout<<"\nEnter: ";
			    			        		cin>>a;
			    			        		switch (a)
			        			    		{
			         					   		case 1:
			        		    				{
			        		    					cout<<"Thnxs for reachng till here.";
												}
												break;
												case 2:
												{
													cout<<"Thnxs for reachng till here.";
												}
												break;
												default:
												{
													cout<<"Invalid Number";
												}
											}
										}
									break;
									case 4:
									    {
											cout<<"Sorry here is no transection for cancellation."<<endl;
    		 				                cout<<"1: Cencel."<<endl;
    		 				        	    cout<<"\nEnter: ";
			    			        		cin>>a;
			    			        		switch (a)
			        			    		{
			         					   		case 1:
			        		    				{
			        		    					cout<<"Thnxs for reachng till here.";
												}
												break;
												default:
												{
													cout<<"Invalid Number";
												}
											}
										}
									break;
									default:
									    {
											cout<<"Invalid Code";
										}	
								}
							break;
//							1:send money > 2:to cinc
							case 2:
								{
									cout<<"1:Enter Receiver CNIC (13 digits only)"<<endl;
    		 				        cout<<"2:Cencel."<<endl;
    		 				        cout<<"\nEnter: ";
			    			        cin>>a;
			    			        switch (a)
			        			    {
			         					case 1:
			        		    		    {
			        		    				cout<<"Servise is not available";
											}
										break;
										case 2:
											{
												cout<<"Thnxs for reachng till here.";
											}
										break;
										default:
											{
												cout<<"Invalid Number";
											}
									}
								}
//							1:send money > 3:to bank
							break;
							case 3:
								{
									cout<<"1:Select Bank"<<endl;
    		 				        cout<<"2:Cencel."<<endl;
    		 				        cout<<"\nEnter: ";
			    			        cin>>a;
			    			        switch (a)
			    			        {
			    			        	case 1:
			    			        		{
			    			        			cout<<"1:Meezan Bank"<<endl;
    		 								    cout<<"2:Habib Bank Limmited"<<endl;
			 								    cout<<"3:United Bnak"<<endl;
			 								    cout<<"4:MCB"<<endl;
			 								    cout<<"5:Allied Bank"<<endl;
			 								    cout<<"6:Bank Al-Habib"<<endl;
			 								    cout<<"7:Bank Alflah"<<endl;
			 								    cout<<"8:SadaPay"<<endl;
			 								    cout<<"9:Search Bank"<<endl;
												cout<<"0:Cencel Transaction"<<endl;
												cout<<"\nEnter: ";
			    								cin>>a;
			    								switch (a)
			    								{
			    									case 1:
			    										{
			    											cout<<"1:Enter Meezan Bank IBAN"<<endl;
			    											cout<<"2:Cancel.";
			    											cout<<"\nEnter: ";
			    											cin>>a;
			    											switch (a)
			    											{
			    												case 1:
			    													{
			    														cout<<"Server is down.";
																	}
																break;
																case 2:
																	{
																		cout<<"Thnxs for reachng till here.";
																	}
																break;
																default:
																	{
																		cout<<"Invalid Code";
																	}
																
															}
														}
													break;
													case 2:
			    										{
			    											cout<<"1:Enter Habib-Bank-Limmited IBAN"<<endl;
			    											cout<<"2:Cancel.";
			    											cout<<"\nEnter: ";
			    											cin>>a;
			    											switch (a)
			    											{
			    												case 1:
			    													{
			    														cout<<"Server is down.";
																	}
																break;
																case 2:
																	{
																		cout<<"Thnxs for reachng till here.";
																	}
																break;
																default:
																	{
																		cout<<"Invalid Code";
																	}
																
															}
														}
													break;
													case 3:
			    										{
			    											cout<<"1:Enter United Bank IBAN"<<endl;
			    											cout<<"2:Cancel.";
			    											cout<<"\nEnter: ";
			    											cin>>a;
			    											switch (a)
			    											{
			    												case 1:
			    													{
			    														cout<<"Server is down.";
																	}
																break;
																case 2:
																	{
																		cout<<"Thnxs for reachng till here.";
																	}
																break;
																default:
																	{
																		cout<<"Invalid Code";
																	}
																
															}
														}
													break;
													case 4:
			    										{
			    											cout<<"1:Enter MCB IBAN"<<endl;
			    											cout<<"2:Cancel.";
			    											cout<<"\nEnter: ";
			    											cin>>a;
			    											switch (a)
			    											{
			    												case 1:
			    													{
			    														cout<<"Server is down.";
																	}
																break;
																case 2:
																	{
																		cout<<"Thnxs for reachng till here.";
																	}
																break;
																default:
																	{
																		cout<<"Invalid Code";
																	}
																
															}
														}
													break;
													case 5:
			    										{
			    											cout<<"1:Enter Allied Bank IBAN"<<endl;
			    											cout<<"2:Cancel.";
			    											cout<<"\nEnter: ";
			    											cin>>a;
			    											switch (a)
			    											{
			    												case 1:
			    													{
			    														cout<<"Server is down.";
																	}
																break;
																case 2:
																	{
																		cout<<"Thnxs for reachng till here.";
																	}
																break;
																default:
																	{
																		cout<<"Invalid Code";
																	}
																
															}
														}
													break;
													case 6:
			    										{
			    											cout<<"1:Enter Bank Al-Habib IBAN"<<endl;
			    											cout<<"2:Cancel.";
			    											cout<<"\nEnter: ";
			    											cin>>a;
			    											switch (a)
			    											{
			    												case 1:
			    													{
			    														cout<<"Server is down.";
																	}
																break;
																case 2:
																	{
																		cout<<"Thnxs for reachng till here.";
																	}
																break;
																default:
																	{
																		cout<<"Invalid Code";
																	}
																
															}
														}
													break;
													case 7:
			    										{
			    											cout<<"1:Enter Bank Alflah IBAN"<<endl;
			    											cout<<"2:Cancel.";
			    											cout<<"\nEnter: ";
			    											cin>>a;
			    											switch (a)
			    											{
			    												case 1:
			    													{
			    														cout<<"Server is down.";
																	}
																break;
																case 2:
																	{
																		cout<<"Thnxs for reachng till here.";
																	}
																break;
																default:
																	{
																		cout<<"Invalid Code";
																	}
																
															}
														}
													break;
													case 8:
			    										{
			    											cout<<"1:Enter Sada Pay IBAN"<<endl;
			    											cout<<"2:Cancel.";
			    											cout<<"\nEnter: ";
			    											cin>>a;
			    											switch (a)
			    											{
			    												case 1:
			    													{
			    														cout<<"Server is down.";
																	}
																break;
																case 2:
																	{
																		cout<<"Thnxs for reachng till here.";
																	}
																break;
																default:
																	{
																		cout<<"Invalid Code";
																	}
																
															}
														}
													break;	
													case 9:
			    										{
			    											cout<<"1:Search bank by name"<<endl;
			    											cout<<"2:Cancel.";
			    											cout<<"\nEnter: ";
			    											cin>>a;
			    											switch (a)
			    											{
			    												case 1:
			    													{
			    														cout<<"Sory! Server is currently down. Try after Year";
																	}
																break;
																case 2:
																	{
																		cout<<"Thnxs for reachng till here.";
																	}
																break;
																default:
																	{
																		cout<<"Invalid Code";
																	}
																
															}
														}
													break;
													case 0:
			    										{
			    											cout<<"Thnxs for reachng till here.";
														}
													break;
													default:
														{
															cout<<"Invalid Code";
														}
												}
											}
										break;
										case 2:
											{
												cout<<"Thnxs for reachng till here.";
											}
										default:
											{
												cout<<"Invalid Code";
											}
									}
								}
							break;
//							1:send money > 4:to RAAST
							case 4:
								{
									cout<<"1:Enter The RAAST ID of reciever"<<endl;
									cout<<"2:IBAN"<<endl;
    		 				        cout<<"3:Cencel."<<endl;
    		 				        cout<<"\nEnter: ";
			    			        cin>>a;
			    			        switch (a)
			    			        {
			    			        	case 1:
			    			        		{
			    			        			cout<<"Servise is not available yet.";
											}
										break;
										case 2:
			    			        		{
			    			        			cout<<"Servise is not available yet.";
											}
										break;
										case 3:
			    			        		{
			    			        			cout<<"Thnxs for reachng till here.";
											}
										break;
										default:
											{
												cout<<"Invalid Code";
											}
									}
								}
							break;
//							1:send money > 5:to My favourit
							case 5:
							    {
							        cout<<"You didn't add any favourit yet!'";
								}
							break;
//							1:send money > 6:cencel
							case 6:
							    {
			    			        cout<<"Thnxs for reachng till here.";
								}
							break;
							default:
								{
									cout<<"Invalid Code";
								}												
				   		}
					}
				}
			}
		break;
		default:
		{
			cout<<"Code Invalid";
		}
		
	}
}


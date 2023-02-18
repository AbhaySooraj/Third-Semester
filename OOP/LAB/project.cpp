#include <iostream>
#include<stdlib.h>
using namespace std;
static int count[600];

class space
{
	public:
		bool parking[6][100];
		
		space()
		{
			for(int i=0;i<6;i++)
			{
				for(int j=0;j<100;j++)
				{
					parking[i][j]= false;
				}
			}
		}
		
		bool checkslot()
		{
			for(int i=0;i<6;i++)
			{
				for(int j=0;j<100;j++)
				{
					if(parking[i][j]==false)
					{
						return true;
					}
					
				}
			}
			return false;
		}
		void freeslot(int i,int j)
		{
			parking[i][j]=false;
			cout<<"\n SLOT FREED ";
		}
		
		
};
	

class token:public space
{
	public:
		
		int level,slot,hours;
		int i=0, j=0;
  		void issuetoken()
  		{
  			
  			bool found = false;
  			for(int i=0;i<6 && !found;i++)
			{
				for(int j=0;j<100;j++)
				{
	  				if(parking[i][j]==false)
					{
						level=i;
						slot=j;
						parking[i][j]=true;
						found=true;
						break;						
					}
				}
			}
		}
		
  		void gettoken()
  		{
  			if(checkslot()==true)
  			{
  				issuetoken();
  				cout<<" \n TOKEN ISSUED AT LEVEL :"<<level<<" SLOT :"<<slot<< " TOKEN NO: "<<count<<endl;
  			}
  			else
  			{
  				cout<<" Parking Full !!!";
  			}
  				
  		}
  		void parkingamount()
  		{
  			cout<<" Enter no of hours parked :";
  			cin>>hours;
  			fees();
  			
  		}
  		
  		void fees()
		{
			cout<<" The parking fees is :";
			if(hours<=0)
			{
				cout<<"30";
			}
			
			else 
			{
				cout<<30+hours*10;
			}
			freeslot(level,slot);	
		}		
};




int main()
{
	int op,t;
	token obj1[600];
	
	while(1)
	{
		cout<<" \n\n MENU \n PRESS 1 TO ENTER \n PRESS 2 TO EXIT \n ENTER YOUR OPTION :";
		cin>>op;
		switch(op)
		{
			case 1:
			{
				
				obj1[count].gettoken();
				break;
			}
			case 2:
			{
				cout<<" Enter Token No :";
				cin>>t;
				obj1[t].parkingamount();
				break;
			}
			case 3:
			{
				exit(0);
			}
			default:
			{
				cout<<" WRONG OPTION!!!";
			}
		}
	}
}


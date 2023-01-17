#include<iostream>
#include<stdlib.h>
using namespace std;

class point
{
	private:
		int x,y;
		
	public:	
		point()
		{
			x=10;
			y=20;
		}
		
		point(int a, int b)
		{
			x=a;
			y=b;
		}
		
		void setX(int a)
		{
			x=a;
		}
		
		void setY(int b)
		{
			y=b;
		}
		
		void setXY(int a, int b)
		{
			x=a;
			y=b;
		}
		
		void sum(int a, int b)
		{
			int z;
			x=a;
			y=b;
			z=x+y;
			cout<<"SUM: "<<z<<endl;
		}
		
		void sum(int a)
		{
			int num=a,i,sum=0;
			while (num>0)
			{
				i=num%10;
				num=num/10;
				sum=sum+i;
			}
			cout<<"SUM OF DIGIT IS :"<<sum<<endl;
		}
};

int main()
{
	point obj;
	int opt,a,b;
	while(1)
	{
		cout<<" \n\n\n MENU \n PRESS 1 TO ENTER X \n PRESS 2 TO ENTER Y \n PRESS 3 TO ENTER X&Y\n PRESS 4 SUM \n PRESS 5 FOR SUM OF DIGITS \n PRESS 6 TO EXIT \n ENTER YOUR CHOICE ";
		cin>>opt;
		
		switch(opt)
		{
			case 1:
			{	
				cout<<" ENTER X :";
				cin>>a;
				obj.setX(a);
				break;
			}
			
			case 2:
			{
				cout<<" ENTER Y :";
				cin>>b;
				obj.setY(b);
				break;
			}
			
			case 3:
			{
				
				cout<<" ENTER X :";
				cin>>a;
				cout<<" ENTER Y :";
				cin>>b;
				obj.setXY(a,b);
				break;
			}
			
			case 4:
			{	
				obj.sum(a,b);
				break;
			}
			
			case 5:
			{
				obj.sum(a);
				obj.sum(b);
				break;
			}
			
			case 6:
			{
				exit(0);
			}
			
			default:
			{
				cout<<" WRONG OPTION !!! :";
			}
		}
	}
};
				
				
				

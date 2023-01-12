#include<iostream>
using namespace std;

class point
{
	private:
		int x,y
		
	public:	
		point()
		{
			x=0;
			y=0;
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
			cout<<"SUM: "<<endl;
		}
		
		void sum(int a)
		{
			int num=a,i,sum;
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
	int opt
	while(1)
	{
		cout<<" \n\n\n MENU \n PRESS 1 FOR SUM OF X & Y \n PRESS 2 FOR SUM OF X/Y \n PRESS 3 TO EXIT \n ENTER YOUR CHOICE ";
		cin>>opt;
		
		switch(opt)
		{
			case 1:
			{	
				cout<<" ENTER X :";
				
		 
		
		
		
		

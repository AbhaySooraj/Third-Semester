#include<iostream>
using namespace std;

static int count=1;

class employee
{
	private:
		int compute()
		{
			da=0.52*basic;
			
			if(basic<10000)
			{
				it=0;
			}
			
			else if(basic<20000)
			{
				it=basic*0.1;
			}
			
			else if(basic<30000)
			{
				it=basic*0.2;
			}
			
			else if(basic<40000)
			{
				it=basic*0.3;
			}
			netsalary=basic+da-it;
			cout<<" The net salary is "<<netsalary<<endl;
		}
			
		
	
	
	public:
		int eno=0;
		string ename;
		int basic;
		int da;
		int it;
		int netsalary;
		
		
		void getdata()
		{
			
			cout<<" Enter employee name :";
			cin>>ename;
			cout<<endl;
			
			cout<<" Enter basic salary :";
			cin>>basic;
			cout<<endl;
			
		}
		
		void putdata()
		{
			cout<<" Employee no :"<<eno<<endl;
			
			cout<<" Name of employee :"<<ename<<endl;
			
			cout<<" Basic Salary :"<<basic<<endl;
			
			cout<<" Dearness allowance :"<<da<<endl;
			
			cout<<" Income Tax :"<<it<<endl;
			
			compute();
		}
		
		employee()
		{
			eno=eno+count;
			count=count+1;
		}
		
		~employee()
		{
			cout<<" Executing Destructor "<<endl;
		}
};

int main()
{
	employee x[3];
	int i;
	for(i=0;i<3;i++)
	{
		x[i].getdata();
		x[i].putdata();
		cout<<endl;
	}
}	

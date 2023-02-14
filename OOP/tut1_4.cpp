#include<iostream>
using namespace std;

class employee
{
	public:
		string name;
		int year;
		int salary,hours;
		string address;
		
		void getdata()
		{
			cout<<endl;

			cout<<"Enter name  :";
			cin>>name;
			
			cout<<"Enter year :";
			cin>>year;
			
			cout<<"Enter salary :";
			cin>>salary;
			
			cout<<"Enter address :";
			cin>>address;
			
			cout<<"Enter hours :";
			cin>>hours;
			
			cout<<endl;
		}
		
		void putdata()
		{
			cout<<endl;
			
			cout<<name<<"  "<<year<<"  "<<salary<<"  "<<address<<"  "<<hours;
		}
		
		void addsal()
		
		{
			if(salary<5000)
			{
				salary=salary+500;
			}
		}
		
		void addwork()
		{
			if(hours>6)
			{
				salary=salary+100;
			}
		}
		
};

int main()
{
	int i;
	employee e1[3];
	for(i=0;i<3;i++)
	{
		e1[i].getdata();
		e1[i].addsal();
		e1[i].addwork();
	}
	cout<<"NAME"<<" YOJ "<<" SALARY "<<"ADDRESS"<<"HOURS";
	for(i=0;i<3;i++)
	{
		e1[i].putdata();
	}
	cout<<"\n";
}

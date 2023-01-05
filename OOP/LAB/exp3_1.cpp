#include<iostream>
using namespace std;

class employee
{
	public:
		string name;
		int age,phone,sal;
		
		void enterdata()
		{
			cout<<" Enter name of employee :";
			cin>>name;
			
			cout<<" Enter age of employee :";
			cin>>age;
			
			cout<<" Enter phone of employee :";
			cin>>phone;
			
			cout<<" Enter salary of employee :";
			cin>>sal;
		}
		
		void printsalary()
		{
			cout<<endl<<" Details of employee :"<<endl;
			cout<<" Name of employee :"<<name<<endl;
			cout<<" Age of employee :"<<age<<endl;
			cout<<" Phone of employee :"<<phone<<endl;
			cout<<" Salary of employee is :"<<sal<<endl;
			cout<<endl;
		}
};

class officer: public employee
{
	public:
		string spez;
		officer()
		{
			
			
			cout<<" Enter specialization of employee :";
			cin>>spez;
			cout<<endl;
			
			
		}
		
		void printdatao()
		{
			cout<<" Specialisation of employee is:"<<spez<<endl<<endl<<endl;
		}
};

class manager: public employee
{
	public:
		string dept;
		manager()
		{
			
			
			cout<<" Enter department of employee :";
			cin>>dept;
			cout<<endl;
		}
		
		void printdatam()
		{
			cout<<" Department of employee is:"<<dept<<endl<<endl<<endl;
		}
};

int main()
{
	cout<<" Enter details of employee 1"<<endl;
	officer o;
	o.enterdata();
	o.printsalary();
	o.printdatao();
	
	manager m;
	cout<<" Enter details of employee 2"<<endl;
	m.enterdata();
	m.printsalary();
	m.printdatam();
}

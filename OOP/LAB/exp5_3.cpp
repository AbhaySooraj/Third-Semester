#include<iostream>
using namespace std;

class student
{
	public:
		int rollno,m1,m2,tot;
		string name;
		
		student()
		{
			cout<<" Enter rollno of student :";
			cin>>rollno;
			
			cout<<" Enter name of student :";
			cin>>name;
			
			cout<<" Enter mark1: ";
			cin>>m1;
			
			cout<<" Enter mark 2: ";
			cin>>m2;
		}
		
		void total()
		{
			tot=m1+m2;
		}
		
		virtual void showdata()
		{
			cout<<" Roll No of student :"<<rollno<<endl;
			cout<<" Name of student :"<<name<<endl;
			cout<<" Mark 1 :"<<m1<<endl;
			cout<<" Mark 2 :"<<m2<<endl;
			cout<<" Total :"<<tot<<endl;
		}
};

class minorcourse: public student
{
	public:
		int mm1,mm2,mm3;
		
		minorcourse()
		{
			cout<<" Enter minor course mark1: ";
			cin>>mm1;
			
			cout<<" Enter minor course mark2: ";
			cin>>mm2;
			
			cout<<" Enter minor course mark3: ";
			cin>>mm3;
		}
		
		void showdata()
		{
			cout<<" Minor Course Mark 1 :"<<mm1<<endl;
			cout<<" Minor Course Mark 2 :"<<mm2<<endl;
			cout<<" Minor Course Mark 3 :"<<mm3<<endl;
		}
};
			

int main()
{
	student obj1;
	obj1.total();
	minorcourse obj2;
	obj2.total();

	student *ptr;
	ptr= &obj2;
	ptr->showdata();	
}


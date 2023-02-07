#include<iostream>
using namespace std;

class student
{
	public:
		int rollno,m1,m2,m3,tot;
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
			
			cout<<" Enter mark 3: ";
			cin>>m3;
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
			cout<<" Mark 3 :"<<m3<<endl;
			cout<<" Total :"<<tot<<endl;
		}
};

class minorcourse: public student
{
	public:
		string mm1,mm2,mm3;
		
		minorcourse()
		{
			cout<<" Enter minor course 1: ";
			cin>>mm1;
			
			cout<<" Enter minor course 2: ";
			cin>>mm2;
			
			cout<<" Enter minor course 3: ";
			cin>>mm3;
		}
		
		void showdata()
		{
			cout<<" Roll no: "<<rollno<<endl;
			cout<<" Name: "<<name<<endl;
			cout<<mm1<<" mark: "<<m1<<endl;
			cout<<mm2<<" mark: "<<m2<<endl;
			cout<<mm3<<" mark: "<<m3<<endl;
			cout<<"Total : "<<tot<<endl;
		}
};
			

int main()
{
	cout<<endl<<"Student class entry"<<endl;
	
	student obj1;
	obj1.total();
	
	cout<<endl<<"Minorcourse class entry"<<endl;
	minorcourse obj2;
	obj2.total();
	
	student *ptr;
	ptr=&obj2;
	
	cout<<endl<<"Student class entry"<<endl;
	obj1.showdata();
	
	cout<<endl<<"Pointer way entry"<<endl;
	ptr->showdata();
	
}


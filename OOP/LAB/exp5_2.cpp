#include<iostream>
using namespace std;

class student
{
	
	
	public:
		int rollno;
		string name;
		
		void enterdatas()
		{
			cout<<" Enter name of student :";
			cin>>name;
			
			cout<<" Enter Roll No. of student :";
			cin>>rollno;
		}
};

class subject: virtual public student
{	
	public:
		string sub;
		
		void enterdatat()
		{
			cout<<" Enter name of subject :";
			cin>>sub;
		}
};

class language: virtual public student
{	
	public:
		string lan;
		
		void enterdatal()
		{
			cout<<" Enter name of language :";
			cin>>lan;
		}
};

class result: public subject,public language
{
	public:
		int sm,lm;
		
		void enterdata()
		{
			cout<<" Enter mark of subject :";
			cin>>sm;
			
			cout<<" Enter mark of language :";
			cin>>lm;
		}
		
		void showdata()
		{
			cout<<endl<<endl<<endl<<" MARKLIST "<<endl;
			cout<<" Name of student :"<<name<<endl;
			cout<<" Rollno of student :"<<rollno<<endl;
			cout<<" Name of subject :"<<sub<<endl;
			cout<<" Mark of subject :"<<sm<<endl;
			cout<<" Name of language :"<<lan<<endl;
			cout<<" Mark of language :"<<lm<<endl;
		}
};
	
int main()
{
	 result obj1;
	 obj1.enterdatas();
	 obj1.enterdatat();
	 obj1.enterdatal();
	 obj1.enterdata();
	 obj1.showdata();
}


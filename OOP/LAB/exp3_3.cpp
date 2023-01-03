#include<iostream>
using namespace std;

class student
{
	public:
		int rno;
		string sname;
		
		
		void getstudentdata()
		{
			cout<<" Enter Rollno of student :";
			cin>>rno;
			
			cout<<" Enter Name of student :";
			cin>>sname;
		}
};

class test: public student
{
	public:
		int m1,m2,m3;
		
		void getmarks()
		{
			cout<<" Enter Mark 1 :";
			cin>>m1;
			
			cout<<" Enter Mark 2 :";
			cin>>m2;
			
			cout<<" Enter Mark 3 :";
			cin>>m3;
		}
};

class result: public test
{
	public:
		int total;
		
		void putresult()
		{
			total=m1+m2+m3;
			
			cout<<"\n\n Student details "<<endl;
			cout<<" Rollno :"<<rno<<endl;
			cout<<" Name :"<<sname<<endl;
			cout<<" Mark 1 :"<<m1<<endl;
			cout<<" Mark 2 :"<<m2<<endl;
			cout<<" Mark 3 :"<<m3<<endl;
			cout<<" Total :"<<total<<endl;
		}
};

int main()
{
	student s;
	test t;
	result r;
	r.getstudentdata();
	r.getmarks();
	r.putresult();
}

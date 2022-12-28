#include<iostream>
using namespace std;

class student
{
	public:
		int rno,m1,m2;

		void getstudentdata()
		{
			cout<<" Enter Roll No of Student :";
			cin>>rno;
		
			cout<<" Enter Mark 1 :";
			cin>>m1;
			
			cout<<" Enter Mark 2:";
			cin>>m2;
		}
};

class sport
{
	public:
		int grace;
			
		void getsportsdata()
		{
			cout<<" Enter Grace Mark for sports activity :";
			cin>>grace;
		}
};

class report:public student,public sport
{
	public:
		int total;
		float avg;
		
		
		
		void displayreport()
		{
			total=m1+m2+grace;
			avg=total/3;
			cout<<" \n\nStudent Details :"<<endl;
			cout<<" Roll No :"<<rno<<endl;
			cout<<" Mark 1 :"<<m1<<endl;
			cout<<" Mark 2 :"<<m2<<endl;
			cout<<" Grace Marks :"<<grace<<endl;
			cout<<" Total Marks :"<<total<<endl;
			cout<<" Average Marks :"<<avg<<endl;
		}
};

int main()
{
	student s;
	sport sp;
	report r;
	r.getstudentdata();
	r.getsportsdata();
	r.displayreport();
}

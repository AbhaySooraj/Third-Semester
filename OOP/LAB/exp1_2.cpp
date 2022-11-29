#include<iostream>
using namespace std;

static int count=1;

class student
{
	private:
		int contact;
		string email;
		int semgpa[8];
		float totalcgpa;
		
		float compute()
		{
			for(i=0;i<8;i++)
			{
				totalcgpa=totalcgpa+semgpa[i];
			}
			totalcgpa=totalcgpa/8;
			cout<<" Total CGPA is "<<totalcgpa<<endl;
		}
	
	public:
		int rno=0,i;
		string sname;
		
		void getdata()
		{
			cout<<" Enter name of students :";
			cin>> sname;
			cout<<endl;
			
			cout<<" Enter contact number :";
			cin>>contact;
			cout<<endl;
			
			cout<<" Enter email address :";
			cin>>email;
			cout<<endl;
			
			for(i=0;i<8;i++)
			{
				cout<<" Enter SGPA of "<<i+1<<" semester :";
				cin>>semgpa[i];
				cout<<endl;
			}
		}
		
		void putdata()
		{
			cout<<" Roll no :"<<rno<<endl;
			
			cout<<" Name of student :"<<sname<<endl;
			
			cout<<" Contact number :"<<contact<<endl;
			
			cout<<" Email address :"<<email<<endl;
			
			for(i=0;i<8;i++)
			{
				cout<<" SGPA of "<<i+1<<" semester :"<<semgpa[i]<<endl;
			}
			compute();
		}
		
		
		
		student()
		{
			rno=rno+count;
			count=count+1;
		
		}
		
		~student()
		{
			cout<<" Executing Destructor "<<endl;
		}	
};

int main()
{
	student x[3];
	int i;
	for(i=0;i<3;i++)
	{
		x[i].getdata();
		x[i].putdata();
		cout<<endl;
	}
		
}

#include<iostream>
using namespace std;

class student
{
	public:
		int stdid=0,sph,sb1ia,sb2ia;
		string sname,semail;
		
		student()
		{
			stdid=stdid+count;
			count=count+1;
			
		}
		
		void getdatas()
		{
			
			cout<<" Enter name of student :";
			cin>>sname;
			cout<<endl;
			
			cout<<" Enter phone of student:";
			cin>>ph;
			cout<<endl;
			
			cout<<" Enter email of student:";
			cin>>email;
			cout<<endl;
			
			
		}
		
		void displaycards()
		{
			cout<<" Student ID :"<<stdid;
			cout<<" Name of Student :"<<sname;
			cout<<" Phone of Student :"<<sph;
			cout<<" Email of Student :"<<semail;
			cout<<" Subject1_IA:";
			
			cout<<"  :"<<stdid;
			
			
			
			
		void printdatas()
		{
			cout<<" RollNo of student :"<<rno<<endl;
			
			cout<<" Name of student :"<<name<<endl;
			
		}
};

class teacher
{
	public:
		int empid,tph;
		string tname,temail;
		
		teacher()
		{
			empid=empid+count;
			count=count+1;
		}
		
		void inputteacher()
		{
			
			cout<<" Enter name of student :";
			cin>>tname;
			cout<<endl;
			
			cout<<" Enter phone of student:";
			cin>>tph;
			cout<<endl;
			
			cout<<" Enter email of student:";
			cin>>temail;
			cout<<endl;
		}
			













			cout<<" Enter subject1_IA:";
			cin>>sb1ia;
			cout<<endl;
			
			cout<<" Enter subject2_IA:";
			cin>>sb2ia;
			cout<<endl;
			
			cout<<" Enter subject3_IA:";
			cin>>sb3ia;
			cout<<endl;
			
			cout<<" Enter subject1_EA:";
			cin>>sb1ea;
			cout<<endl;
			
			cout<<" Enter subject2_EA:";
			cin>>sb2ea;
			cout<<endl;
			
			cout<<" Enter subject3_IA:";
			cin>>sb3ea;
			cout<<endl;
			
			

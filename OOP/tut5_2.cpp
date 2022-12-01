#include<iostream>
using namespace std;

static int count=1;
class student
{
	private:
		int rno,m1,m2,tot;
	public:
		student()
		{
			rno=count;
			count=count+1;
			
		}
		void display()
		{
			cout<<endl<<endl;
			
			cout<<" Roll no is :"<<rno<<endl;
			
			cout<<" Mark 1 is :"<<m1<<endl;
			
			cout<<" Mark 2 is :"<<m2<<endl;
			
			cout<<" Total marks is :"<<tot<<endl;
		}
		
		friend class teacher;
};

class teacher
{
	public:
		void entermarks(student &t)
		{
			
			cout<<" Enter mark 1 :";
			cin>>t.m1;
			cout<<endl;
			
			cout<<" Enter mark 2:";
			cin>>t.m2;
			t.tot=t.m1+t.m2;
		}
};

int main()

{
	student milin;
	teacher binu;
	binu.entermarks(milin);	
	milin.display();
}


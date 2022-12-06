#include<iostream>
using namespace std;

class student
{
	public:
		int rno;
		string name;
		
		void getdatas()
		{
			
			cout<<" Enter rollno of student:";
			cin>>rno;
			cout<<endl;
			
			cout<<" Enter name of student :";
			cin>>name;
			cout<<endl;
			
		}
		
		void putdatas()
		{
			cout<<" RollNo of student :"<<rno<<endl;
			
			cout<<" Name of student :"<<name<<endl;
			
		}
		friend class result;
		friend class internal;
		friend class external;
		
};

class internal:public student
{
	public:
		int ia1;
		int ia2;
		int ia3;
		
		void getdatai(student &t)
		{
			
			cout<<" Enter IA mark 1:";
			cin>>ia1;
			cout<<endl;
			
			cout<<" Enter IA mark 2 :";
			cin>>ia2;
			cout<<endl;
			
			cout<<" Enter IA mark 3:";
			cin>>ia3;
			cout<<endl;
		}
		
		void putdatai(student &t)
		{
			cout<<" IA mark 1: :"<<t.ia1<<endl;
			
			cout<<" IA mark 2: :"<<t.ia2<<endl;

			cout<<" IA mark 3: :"<<t.ia3<<endl;
			
		}
		friend class result;
};

class external:public student
{
	 public:
	 	int ese;
	 	void getdatae(student &t)
		{
			
			cout<<" Enter ESE mark:";
			cin>>t.ese;
			cout<<endl;

		}
		
		void putdatae(student &t)
		{
			cout<<" ESE mark: :"<<t.ese<<endl;
			
		}
};

class result:public student,public internal, public external
{
	public:
		int total;
		void compute(student &t)
		{
			t.total=t.ia1+t.ia2+t.ia3+t.ia3+t.ese;
		}
		
		void display(student &t)
		{
			cout<<" Total mark is :"<<t.total<<endl;
		}
		friend class internal;
		friend class external;
		
};

int main()
{
	student s1;
	result tot;
	s1.getdatas();
	s1.putdatas();
	s1.getdatai();
	s1.putdatai();
	tot.compute(s1);
	tot.display;
}
	

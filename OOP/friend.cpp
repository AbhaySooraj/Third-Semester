#include<iostream>
using namespace std;

class student
{
	public:
		int rno;
		string name;
		
		void inputdatas()
		{
			
			cout<<" Enter rollno of student:";
			cin>>rno;
			cout<<endl;
			
			cout<<" Enter name of student :";
			cin>>name;
			cout<<endl;
			
		}
		
		void printdatas()
		{
			cout<<" RollNo of student :"<<rno<<endl;
			
			cout<<" Name of student :"<<name<<endl;
			
		}
		friend class result;
};

class intern:public student
{
	public:
		int ia1;
		int ia2;
		int ia3;
		
		void inputdatai()
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
		
		void printdatai()
		{
			cout<<" IA mark 1: :"<<ia1<<endl;
			
			cout<<" IA mark 2: :"<<ia2<<endl;

			cout<<" IA mark 3: :"<<ia3<<endl;
			
		}
		friend class result;
};

class external:public student
{
	 public:
	 	int ese;
	 	void inputdatae()
		{
			
			cout<<" Enter ESE mark:";
			cin>>ese;
			cout<<endl;

		}
		
		void printdatae()
		{
			cout<<" ESE mark: :"<<ese<<endl;
			
		}
		friend class result;
};

class result:public external,public intern
{
	public:
		int total;
		void compute(intern &i,external &e)
		{
			total=i.ia1+i.ia2+i.ia3+i.ia3+e.ese;
		}
		
		void display()
		{
			cout<<" Total mark is :"<<total<<endl;
		}
		
		
};

int main()
{
	student s1;
	intern i1;
	external e1;
	result tot;
	s1.inputdatas();
	s1.printdatas();
	i1.inputdatai();
	i1.printdatai();
	e1.inputdatae();
	e1.printdatae();
	tot.compute(i1,e1);
	tot.display();

}

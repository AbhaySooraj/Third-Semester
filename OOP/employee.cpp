#include<iostream>
using namespace std;

class employee
{
	public:
		string name;
		int year;
		int salary;
		string address;
		
		void getdata()
		{
			cout<<endl;

			cout<<"Enter name  :";
			cin>>name;
			
			cout<<"Enter date of joining :";
			cin>>year;
			
			cout<<"Enter salary :";
			cin>>salary;
			
			cout<<"Enter address :";
			cin>>address;
			
			cout<<endl;
		}
		
		void putdata()
		{
			cout<<endl;
			
			cout<<name<<"  "<<year<<"  "<<salary<<"  "<<address;
		}	
};

int main()
{
	employee e1,e2,e3;
	e1.getdata();
	e2.getdata();
	e3.getdata();
	cout<<"NAME"<<" YOJ "<<" SALARY "<<"ADDRESS";
	e1.putdata();
	e2.putdata();
	e3.putdata();
}
	

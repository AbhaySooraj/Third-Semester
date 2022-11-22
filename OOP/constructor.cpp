#include<iostream>
using namespace std;

class my_class
{
	public:
		int a,b;
		
		my_class()
		{
			a=10;
			b=20;
			cout<<" Executing Default Constructor"<<endl;
		}
		my_class(int x,int y)
		{
			a=x;
			b=y;
			cout<<" Executing Parametrised Constructor"<<endl;
		}
		~my_class()
		{
			cout<<" Executing Destructor"<<endl;
		}
		
		void display()
		{
			cout<<" The value of a is "<<a<<endl;
			cout<<" The value of b is "<<b<<endl;
		}
};

int main()
{
	my_class obj1;
	obj1.display();
	my_class obj2(100,200);
	obj2.display();
}
	

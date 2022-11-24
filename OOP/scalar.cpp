#include<iostream>
using namespace std;

class scalar
{
	public:
		int x[3];
		
		scalar()
		{
			x[0]=1;
			x[1]=1;
			x[2]=1;
		}
		
		scalar(int a)
		{
			x[0]=a;
			x[1]=1;
			x[2]=1;
		}
		
		scalar(int a, int b)
		{
			x[0]=a;
			x[1]=b;
			x[2]=1;
		}
		
		scalar(int a, int b, int c)
		{
			x[0]=a;
			x[1]=b;
			x[2]=c;
		}
		
		~scalar()
		{
			cout<<" Executing Destructor "<<endl;
		}
		
		scalar multiply(int a, scalar i)
		{
			i.x[0]=a*i.x[0];
			i.x[1]=a*i.x[1];
			i.x[2]=a*i.x[2];
			return i;
		}
		
		void display()
		{
			cout<<x[0]<<" i + "<<x[1]<<" j + "<<x[2]<<" k "<<endl;
		}
};

int main()
{
	scalar obj1(10,11,12);
	obj1=obj1.multiply(5,obj1);
	obj1.display();
}

#include<iostream>
using namespace std;

class vector
{
	public:
		int x[3];
		
		vector()
		{
			x[0]=10;
			x[1]=20;
			x[2]=30;
		}
		
		vector(int a)
		{
			x[0]=a;
			x[1]=20;
			x[2]=30;
		}
		
		vector(int a,int b)
		{
			x[0]=a;
			x[1]=b;
			x[2]=30;
		}
		
		vector(int a,int b,int c)
		{
			x[0]=a;
			x[1]=b;
			x[2]=c;
		}
		
		
		
		vector addvector(vector i,vector j)
		{
			vector k;
			k.x[0]=i.x[0]+j.x[0];
			k.x[1]=i.x[1]+j.x[1];
			k.x[2]=i.x[2]+j.x[2];
			return k;
		}
		
		void display()
		{
			cout<<x[0]<<" i + "<<x[1]<<" j + "<<x[2]<<" k "<<endl;
		}
		
		~vector()
		{
			cout<<" Executing Destructor "<<endl;
		}
};

int main()
{
	vector obj1(100),obj2,obj3;
	obj3=obj3.addvector(obj1,obj2);
	cout<<" The result is :"<<endl;
	obj3.display();
}
			

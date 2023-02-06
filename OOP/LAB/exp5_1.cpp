#include<iostream>
using namespace std;

class shape
{
	public:
		void numberofsides()
		{
		
		}
};

class rectangle: public shape
{
	public:
		void numberofsides()
		{
			cout<<" Rectangle has 4 sides "<<endl;
		}
};

class triangle: public shape
{
	public:
		void numberofsides()
		{
			cout<<" Triangle has 3 sides "<<endl;
		}
};

class hexagon: public shape
{
	public:
		void numberofsides()
		{
			cout<<" Hexagon has 6 sides "<<endl;
		}
};

int main()
{
	shape obj1;
	rectangle obj2;
	triangle obj3;
	hexagon obj4;
	
	obj1.numberofsides();
	obj2.numberofsides();
	obj3.numberofsides();
	obj4.numberofsides();
}

#include<iostream>
using namespace std;

class car
{
	private:
		int litres;
		double consumption;
	public:
		car()
		{
			litres=40;
			consumption=0.1;
			cout<<" Car created with "<<litres<<" litres and "<<consumption<<" consumption"<<endl;
		}
		
		car(int x,double y)
		{
			litres=x;
			consumption=y;
			cout<<" Car created with "<<litres<<" litres and "<<consumption<<" consumption"<<endl;
		}
		~car()
		{
			cout<<" Car destroyed with "<<litres<<" litres and "<<consumption<<" consumption"<<endl;
		}
		
		void maxdistance();
};

void car::maxdistance()
		{
			double max;
			max=litres/consumption;
			cout<<" The maximum distance is "<<max<<endl;
		}
		



int main()
{
	car obj1;
	obj1.maxdistance();
	
	car obj2(100,0.2);
	obj2.maxdistance();
}

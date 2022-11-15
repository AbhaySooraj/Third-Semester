#include<iostream>
using namespace std;

class area
{
	public:
		int length;
		int breadth;
		int ar;
		
		void setdim()
		{
			cout<<endl;
			
			cout<<"Enter the length :";
			cin>>length;
			
			cout<<"Enter the breadth :";
			cin>>breadth;
			
			
			ar=length*breadth;
		}
		
		void getarea()
		{
			
			cout<<"The area is "<<ar;
			
		}
};

int main()
{
	area r;
	r.setdim();
	r.getarea();
}

			

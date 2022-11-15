#include<iostream>
using namespace std;

class complex
{
	public:
		int real;
		int imag;
		
		void getdata()
		{
			cout<<"Enter real part of number :";
			cin>>real;
			
			cout<<"Enter imaginary part of number :";
			cin>> imag;
			
			cout<<endl;
		}
		
		void putdata()
		{
			cout<<"The imaginary number is ";
			cout<<real<<" + "<<imag<<" i";
			
		}
		
		complex add(complex x,complex y,complex z)
		{
			complex a;
			a.real=z.real+x.real+y.real;
			a.imag=z.imag+x.imag+y.imag;
			return a;
		}
		
		complex sub(complex x,complex y)
		{
			complex z;
			z.real=x.real-y.real;
			z.imag=x.imag-y.imag;
			return z;
		}
		
};

int main()
{
	int op;
	cout<<" MENU \n PRESS 1 FOR ADDITION OF 3 NUMBERS \n PRESS 2 FOR SUBTRACTION OF 2 NUMBERS \n ENTER YOUR CHOICE :";
	cin>>op;
	if(op==1)
	{
		complex c1,c2,c3,c4;
		c1.getdata();
		c2.getdata();
		c3.getdata();
		c4=c4.add(c1,c2,c3);
		c4.putdata();
	}
	
	else if(op==2)
	{
		complex c1,c2,c3,c4;
		c1.getdata();
		c2.getdata();
		c3=c3.sub(c1,c2);
		c3.putdata();
	}
}
























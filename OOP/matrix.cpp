#include<iostream>
using namespace std;

class matrix
{
	public:
		int mat[2][2];
		
		matrix()
		{
			mat[0][0]=1;
			mat[0][1]=1;
			mat[1][0]=1;
			mat[1][1]=1;
		}
		
		matrix(int a,int b, int c, int d)
		{
			mat[0][0]=a;
			mat[0][1]=b;
			mat[1][0]=c;
			mat[1][1]=d;
		}
		
		~matrix()
		{
			cout<<" Executing Destructor "<<endl;
		}
		
		matrix addmat(matrix m1, matrix m2)
		{
			matrix m3;
			m3.mat[0][0]=m1.mat[0][0]+m2.mat[0][0];
			m3.mat[0][1]=m1.mat[0][1]+m2.mat[0][1];
			m3.mat[1][0]=m1.mat[1][0]+m2.mat[1][0];
			m3.mat[1][1]=m1.mat[1][1]+m2.mat[1][1];
			return m3;
		}
		
		void display()
		{
			cout<<mat[0][0]<<"  "<<mat[0][1]<<"  "<<endl;
			cout<<mat[1][0]<<"  "<<mat[1][1]<<"  "<<endl;
		}
};

int main()
{
	matrix obj1(10,20,30,40),obj2(100,200,300,400),obj3;
	obj3=obj2.addmat(obj1,obj2);
	obj3.display();
}

#include<iostream>
using namespace std;
class student
{
	public:
		int stdid;
		string stdname;
		
		void getpersonaldetails()
		{
			cout<<"Enter Student ID :";
			cin>>stdid;
			cout<<"Enter Student Name :";
			cin>>stdname;
		}
		
		void putpersonaldetails()
		{
			cout<<"Student ID is "<<stdid;
			cout<<"Student Name is "<<stdname;
		}
};

class teacher
{
	public:
		
		int tid;
		string tname;
		
		void getpersonaldetails()
		{
			cout<<"Enter Teacher ID :";
			cin>>tid;
			cout<<"Enter Teacher Name :";
			cin>>tname;
		}
		
		void putpersonaldetails()
		{
			cout<<"Teacher ID is "<<tid;
			cout<<"Teacher Name is "<<tname;
		}
		
};

class grade
{
	public:
		int stdid,
		    tid,
		    intm1,
		    intm2,
		    asm1,
		    asm2,
		    toi,
		    ese,
		    total,
		    
		void entermarks()
		{
			cout<<"Enter Student ID :";
			cin>>stdid;
			
			cout<<"Enter Teacher ID :";
			cin>>tid;
			
			
			cout<<"Enter internal mark1 :";
			cin>>intm1;
			
			cout<<"Enter internal mark2 :";
			cin>>intm2;
			
			cout<<"Enter assignment mark1 :";
			cin>>asm1;
			
			cout<<"Enter assignment mark2 :";
			cin>>asm2;
			
			toi=intm1+intm2+asm1+asm2;
			
			cout<<"Enter end sem mark :";
			cin>>ese;
			
			total=toi+ese;
			
		}
		
		void compute()
		{
			float x;
			int gpa;
			x=total/10;
			if(x>9)
			{
				gpa=10;
			}
			else if(8<x<9);
			{
				gpa=9;
			}
			else if(7<x<8);
			{
				gpa=8;
			}
			else
			{
				continue;
			}
		}
		
		void viewgradecard()
		{
			int stdid,
		    	tid,
		    	intm1,
		    	intm2,
		    	asm1,
		   	asm2,
		    	toi,
		    	ese,
		    	total,
		    	gpa;
		    	
			cout<<"Student ID :"<<stdid;
						
			cout<<" Internal mark1 :"<<intm1;
			
			cout<<" Internal mark2 :"<<intm2;
			
			cout<<" Assignment mark1 :"<<asm1;
			
			cout<<"Assignment mark2 :"<<asm2;
			
			cout<<"Total internal mark :"<<toi;
			
			cout<<"Sem mark :"<<ese;
			
			cout<<"Total :"<<total;
			
			cout<<"GPA :"<<gpa;
		}
};
	
			
int main()
{
	gradeCard gd1;
	student st1;
	teacher tchr1;
}			
			
			
			

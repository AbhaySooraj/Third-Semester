#include<iostream>
using namespace std;
static int f1=1,f2=1;

class student
{
	public:
		int stdid,sph,sb1ia,sb2ia,sb3ia,sb1e,sb2e,sb3e,sb1a,sb2a,sb3a;
		float total,cgpa;
		string sname,semail,ests;
		
		student()
		{
			stdid=f1;
			f1=f1+1;
			sb1ia=0;
			sb2ia=0;
			sb3ia=0;
			sb1e=0;
			sb2e=0;
			sb3e=0;
			sb1a=0;
			sb2a=0;
			sb3a=0;
			total=0;
			cgpa=0;
		}
		
		void getdatas()
		{
			
			cout<<" Enter name of student :";
			cin>>sname;

			cout<<" Enter phone of student:";
			cin>>sph;
			
			cout<<" Enter email of student:";
			cin>>semail;
			cout<<endl;
			
			
		}
		
		void displaycards()
		{
			cout<<endl<<endl;
			cout<<" Student ID :"<<stdid<<endl;
			cout<<" Name of Student :"<<sname<<endl;
			cout<<" Phone of Student :"<<sph<<endl;
			cout<<" Email of Student :"<<semail<<endl;
			cout<<" Subject1_IA :"<<sb1ia<<endl;
			cout<<" Subject2_IA :"<<sb2ia<<endl;
			cout<<" Subject3_IA :"<<sb3ia<<endl;
			cout<<" Subject1_ESE :"<<sb1e<<endl;
			cout<<" Subject2_ESE :"<<sb2e<<endl;
			cout<<" Subject3_ESE :"<<sb3e<<endl;
			cout<<" Subject1_Attendance :"<<sb1a<<endl;
			cout<<" Subject2_Attendance :"<<sb2a<<endl;
			cout<<" Subject3_Attendance :"<<sb3a<<endl;
			cout<<" Total :"<<total<<endl;
			cout<<" CGPA :"<<cgpa<<endl;
			cout<<" Eligibility Status :"<<ests<<endl;
		}
	
		friend class cteacher;
		friend class steacher;
};

class cteacher
{
	public:
		int empid,cph;
		string cname,cemail;
		
		cteacher()
		{
			empid=f2;
			f2=f2+1;
		}
		
		void getdatac()
		{
			
			cout<<" Enter name of class teacher:";
			cin>>cname;
			
			cout<<" Enter phone of teacher:";
			cin>>cph;
			
			cout<<" Enter email of teacher:";
			cin>>cemail;
			cout<<endl;
		}
		
		void calculatetotal(student &t)
		{
			t.total=(t.sb1ia+t.sb2ia+t.sb3ia+t.sb1e+t.sb2e+t.sb3e)/6;
		}
		
		void calculatecgpa(student &t)
		{
			t.cgpa=t.total*0.1;
		} 
		
		void eligibility(student &t)
		{
			float sum=0;
			sum=(t.sb1a+t.sb2a+t.sb3a)/3;
			if(sum<80)
			{
				t.ests="False";
			}
			else
			{
				t.ests="True";
			}
		}
		
		void showRanklist(student t[])
		{
			int i,j,n=5;
			student temp;

			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(t[i].cgpa<t[j].cgpa)
					{
						temp =t[i];
						t[i]=t[j];
						t[j]=temp;
					}
				}
			}
			cout<<"\nRANK LIST:"<<endl;
			cout<<"STDID  CGPA  Rank "<<endl;
			int rank=1;
			for(i=0;i<n;i++)
			{
				cout<<rank<<"\t"<<t[i].cgpa<<"\t"<<t[i].stdid<<endl;
				rank+=1;
			}
			cout<<endl;
		}
	

			
};

class steacher
{
	public:
		int empid,tph;
		string tname,temail;
		
		steacher()
		{
			empid=f2;
			f2=f2+1;
		}
		
		void getdatat()
		{
			
			cout<<" Enter name of subject teacher:";
			cin>>tname;

			cout<<" Enter phone of subject teacher:";
			cin>>tph;
			
			cout<<" Enter email of subject teacher:";
			cin>>temail;
			cout<<endl;
		}
		
		void entermarks(student &t,int empids)
		{
			if(empids==1)
			{
				cout<<" Enter subject1_IA:";
				cin>>t.sb1ia;
		
				cout<<" Enter subject1_EA:";
				cin>>t.sb1e;
			}
			else if(empids==2)
			{
				cout<<" Enter subject2_IA:";
				cin>>t.sb2ia;

				cout<<" Enter subject2_EA:";
				cin>>t.sb2e;
			}
			
			else if(empids==3)
			{
				cout<<" Enter subject3_IA:";
				cin>>t.sb3ia;
				
				cout<<" Enter subject3_EA:";
				cin>>t.sb3e;
			}
		}
		
		void enteratt(student &t,int empids)
		{
			if(empids==1)
			{
				cout<<" Enter attendance of subject1 :";
				cin>>t.sb1a;
			}
			else if(empids==2)
			{	
				cout<<" Enter attendance of subject2 :";
				cin>>t.sb2a;
			}
			else if(empids==3)
			{
				cout<<" Enter attendance of subject3 :";
				cin>>t.sb3a;
				cout<<endl;
			}
		}
};


int main()
{
	int i,j;
	student std[5];
	steacher st[3];
	cteacher ct;
	
	cout<<" Enter details of class teacher :"<<endl;
	ct.getdatac();
	
	
	for(i=0;i<3;i++)
	{
		cout<<" Enter details of subject teacher :"<<i+1<<endl;
		st[i].getdatat();
	}
	
	cout<<" Enter details of student :"<<endl;
	for(i=0;i<5;i++)
	{
		std[i].getdatas();
		for(j=0;j<3;j++)
		{
			st[j].entermarks(std[i],st[j].empid);
			st[j].enteratt(std[i],st[j].empid);
		}
		ct.calculatetotal(std[i]);
		ct.calculatecgpa(std[i]);
		ct.eligibility(std[i]);
	}
	
	for(i=0;i<5;i++)
	{
		std[i].displaycards();
	}
	ct.showRanklist(std);
}	

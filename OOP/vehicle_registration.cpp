#include<iostream>
using namespace std;


class vehicleregis
{
	private:
		int chasis;
		string vehicle,owner;
		
	public:
		int regno,regyear;
		void getdata();
		void vehicletransfer();
		
		vehicleregis(int x,int y)
		{
			regno=x;
			x=x+1;
			
			regyear=y;
			getdata();
		}
		~vehicleregis()
		{
			cout<<"\n\nThe vehicle with regisno : "<<regno<<" \n Reg year : "<<regyear<<" \n Chasis no :" <<chasis<<" \n Vehicle type : "<<vehicle<<" \n Owner name : "<<owner<<"\n is destroyed\n";
		}
};

void vehicleregis::getdata() 
{
	cout<<"Enter chasis no :";
	cin>>chasis;
	
	cout<<"Enter vehicle type :";
	cin>>vehicle;
	
	cout<<"Enter name of owner :";
	cin>>owner;
	cout<<endl<<endl;
}

void vehicleregis::vehicletransfer()
{
	string newowner;
	cout<<" The new owner is :";
	cin>>newowner;
	owner=newowner;
	cout<<endl<<endl;
}

int main()
{
	int x,flag=1;
	vehicleregis obj[] = { vehicleregis(1,2010), vehicleregis(2, 2011) };
	
	cout<<"\n\n Enter regis no of vehicle to be changed :";
	cin>>x;
	
	for(int i=0;i<2;i++)
	{
		if(obj[i].regno==x)
		{
			obj[i].vehicletransfer();
			flag=1;
		}
	}
	try
	{
		if(flag!=1)
		{
			throw " Vehicle Not Found ";
		}
	}
	catch(const char * msg)
	{
		cerr<<msg<<endl;
	}
}

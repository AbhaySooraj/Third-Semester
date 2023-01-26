#include<iostream>
using namespace std;
class cur_acct;
class sav_acct;

class account
{
	public:
		string cust_name,acc_type;
		int acc_no;
		
		account()
		{
			cust_name="Abc";
			acc_no=101;
			acc_type="Gold";
		}
		
		friend void showbalance(account,cur_acct,sav_acct);
		friend int deposit(account ,cur_acct );
		friend int interest(account , sav_acct );
		friend int withdraw(account , cur_acct );
};


class cur_acct
{
	public:
		int camt;
		
		void set()
		{
			camt=5000;
		}
		
		friend void showbalance(account,cur_acct,sav_acct);
		friend int deposit(account ,cur_acct );
		friend int interest(account , sav_acct );
		friend int withdraw(account , cur_acct );
		
		
};

class sav_acct
{
	public:
		int samt;
		
		void set()
		{
			samt=10000;
		}
		
		friend void showbalance(account,cur_acct,sav_acct);
		friend int deposit(account ,cur_acct );
		friend int interest(account , sav_acct );
		friend int withdraw(account , cur_acct );
};
	
void showbalance(account a,cur_acct b,sav_acct c)
{
	cout<<" Customer Name :"<<a.cust_name<<endl;
	cout<<" Account No. :"<<a.acc_no<<endl;
	cout<<" Account Type :"<<a.acc_type<<endl;
	cout<<" Current Account :"<<b.camt<<endl;
	cout<<" Savings Account :"<<c.samt<<endl;
}

int deposit(account a,cur_acct b)
{
	int damt;
	cout<<" Enter amount to be deposited :";
	cin>>damt;
	b.camt=b.camt+damt;
	return b.camt;
}

int interest(account a , sav_acct c)
{
	int iamt;
	iamt=c.samt*0.1;
	c.samt=c.samt+iamt;
	return c.samt;
}

int withdraw(account a, cur_acct b)
{
	int wamt;
	cout<<" Enter amount to be withrawn :";
	cin>>wamt;
	b.camt=b.camt-wamt;
	return b.camt;
}		

int main()
{
	int op;
	account obj1;
	cur_acct obj2;
	sav_acct obj3;
	obj2.set();
	obj3.set();
	
	while(1)
	{
		cout<<"\n\n MENU \n PRESS 1 TO ACCEPT DEPOSIT \n PRESS 2 TO DISPLAY BALANCE \n PRESS 3 TO DEPOSIT INTEREST \n PRESS 4 TO WITHDRAW \n PRESS 5 TO EXIT \n ENTER YOUR OPTION :";
		cin>>op;
		switch(op)
		{
			case 1:
			{	
				obj2.camt = deposit(obj1 ,obj2);
    				break;
			}
			
			case 2:
			{
				showbalance(obj1, obj2, obj3);
				break;
			}
			
			case 3:
			{
				obj3.samt=interest(obj1 , obj3 );
				break;
			}
			
			case 4:
			{
				obj2.camt = withdraw(obj1 ,obj2);
    				break;
			}
			
			case 5:
			{
				exit(0);
			}
			
			default:
			{
				cout<<" WRONG OPTION !!!"<<endl;
			}
		}
	}
}
				

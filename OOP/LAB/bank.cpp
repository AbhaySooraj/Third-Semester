#include<iostream>
using namespace std;


class Customer
{
	public:
		int phone,adcrd;
		string name;
		
		void enterdata()
		{
			cout<<" Enter name :";
			cin>>name;
			cout<<endl;
			
			cout<<" Enter Aadhar card:";
			cin>>adcrd;
			cout<<endl;
			
			cout<<" Enter Phone:";
			cin>>phone;
			cout<<endl;
		}
}
		
// Few functions ...
//hasA friend relationship with Account
}
class Account
{
// Account Detail ...
// Few functions ...
//hasA friend relationship with Customer
}
class RBI
{
Customer c;
Account a;    //hasA relationship
..
Public double GetInterestRate() {    }
Public double GetWithdrawalLimit() {    }
}
class SBI: public RBI
{
//Use RBI functionality or define own functionality.
}
class ICICI: public RBI
{
//Use RBI functionality or define own functionality.
}

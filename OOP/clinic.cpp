#include<iostream>
#include<stdlib.h>
using namespace std;

class patient
{
	public :
		int patientid;
		string pname;
		void getPatientInfo();
		void putPatientInfo();
		void makeAppointment();
		void Diagnosis();
		void Billing();
		void printBill();
		
		
	private:
		string address;
		string gender;
		int phoneno;
		string bloodgrp;
		string doctor_name;
		string date;
		string diagnosisinfo;
		string medicineinfo;
		int doctorfee;
		int medicinechrg;
		int total;
};


void patient :: getPatientInfo()
{
	cout<<endl;
	
	cout<<" Enter Patient ID :";
	cin>>patientid;

	cout<<endl;
	
	cout<<" Enter Patient Name :";
	cin>>pname;

	cout<<endl;
	
	cout<<" Enter Address :";
	cin>>address;

	cout<<endl;
	
	cout<<" Enter Gender :";
	cin>>gender;

	cout<<endl;
	
	cout<<" Enter Phone No. :";
	cin>>phoneno;

	cout<<endl;
	
	cout<<" Enter Blood Group :";
	cin>>bloodgrp;

	cout<<endl;
}


void patient::putPatientInfo()
{
	cout<<endl;
	
	cout<<" Patient ID :"<<patientid;

	cout<<endl;
	
	cout<<" Patient Name :"<<pname;

	cout<<endl;
	
	cout<<" Address :"<<address;

	cout<<endl;
	
	cout<<" Gender :"<<gender;

	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<" Phone No. :"<<phoneno;

	cout<<endl;
	
	cout<<" Enter Blood Group :"<<bloodgrp;

	cout<<endl;
}


void patient::makeAppointment()
{
	cout<<endl;
	
	cout<<" Enter the name of the Doctor :";
	cin>>doctor_name;
	
	cout<<" Enter the date of the appoinment :";
	cin>>date;
}

void patient::Diagnosis()
{
	cout<<endl;
	
	cout<<" Enter the Diagnosis Info :";
	cin>>diagnosisinfo;
	
	cout<<endl;
	
	cout<<" Enter Medicine Info : ";
	cin>>medicineinfo;
	
	cout<<endl;
	
}

void patient::Billing()
{
	cout<<endl;
	
	cout<<" Enter doctor fee :";
	cin>>doctorfee;
	
	cout<<" Enter medicine charge :";
	cin>>medicinechrg;
	
	total=doctorfee+medicinechrg;

	cout<<endl;
}

void patient::printBill()
{
	cout<<" Patient ID :"<<patientid;
	
	cout<<" Doctor Fee :"<<doctorfee;
	
	cout<<" Medicine Charge :"<<medicinechrg;
	
	cout<<" Total :"<<total;
}

int main()
{
	int x;
	patient pat;
	
	while(1)
	{
		cout<<"\n\n\n MENU \n PRESS 1 FOR ENTERING PATIENT INFO \n PRESS 2 FOR PRINTING PATIENT INFO \n PRESS 3 FOR MAKING APPOINMENT \n PRESS 4 FOR DIAGNOSIS \n PRESS 5 FOR ENTERING BILLING DETAILS \n PRESS 6 FOR PRINTING BILL \n PRESS 7 FOR EXITING \n ENTER YOU OPTION :";
		cin>>x;
		
		switch(x)
		{
			case 1:
			{
				pat.getPatientInfo();
				break;
			}
			
			case 2:
			{
				pat.putPatientInfo();
				break;
			}
			
			case 3:
			{
				pat.makeAppointment();
				break;
			}
			
			case 4:
			{
				pat.Diagnosis();
				break;
			}
			
			case 5:
			{
				pat.Billing();
				break;
			}
			
			case 6:
			{
				pat.printBill();
				break;
			}
			
			case 7:
			{
				exit(0);
			}
			
			default:
			{
				cout<<" Wrong Option ";
			}
		}
	}
}
				
	
	
	
	
	
	
	

#include <iostream>
using namespace std;
class book
{
	public:
		int bookID;
		string bookName;
		
		void getbookinfo()
		{
			cout<<"Enter Book ID :";
			cin>>bookID;
			cout<<"Enter Book Name :";
			cin>>bookName;
			cout<<endl;
		
		}
		
		void printbookinfo()
		{
			cout<<"Book ID is :"<<bookID<<endl;
			cout<<"Book Name is :"<<bookName <<endl;
		}
		
		void issue()
		{
			transaction ;
			int record[2];
			record.update();
		}
		
};


class transaction
{
	public:
		int bookID;
		int studID;
		
		void update()
		{
			cout<<"Enter Book ID :";
			cin>>bookID;
			cout<<"Enter Student ID :";
			cin>>studID;
		}
};
		

int main()
{
	int n,i;
	cout<<"Enter number of books";
	cin>>n;
	book title[n];
	for(i=0;i<n;i++)
	{
		title[i].getbookinfo();
	}
	cout<<endl<<"THE BOOKS ARE :"<<endl;
	for(i=0;i<n;i++)
	{
		title[i].printbookinfo();
		cout<<endl;
	}
	return 0;
}
			

#include<iostream>
#include<string.h>
using namespace std;

class str
{
	public:
		char s[25];
		
		str()
		{
		}
		
		str(char st[])
		{
			strcpy(this->s,st);
		}
		
		str operator +(str const &obj)
		{
			str s3;
			strcpy(s3.s,this->s);
			strcat(s3.s,obj.s);
			return s3;
		}
		
		str operator =(str const &obj)
		{
			str s3;
			strcpy(this->s,obj.s);
			return s3;
		}
		
		
		void operator ++()
		{
			for(int i=0;i<strlen(this->s);i++)
			{
				this->s[i]=toupper(this->s[i]);
			}
		}	
















/*
		
class str
{
	public:
		char s[25];
		
		str()
		{
		}
		
		str(char st[])
		{
			strcpy(this->s,st);
		}
		
		void operator --()
		{
			for(int i=0;i<strlen(this->s);i++)
			{
				this->s[i]=tolower(this->s[i]);
			}
		}
};
int main()
{
	str obj("BTechCSBS");
	--obj;
	cout<<obj.s;
	return 1;
}


int main()
{
	str obj("BTech CSBS");
	++obj;
	cout<<obj.s;
	return 1;
}
*/

int main()
{
	int op;
	
	char s1[25]="B Tech";
	char s2[25]="Csbs ";
	str obj1(s1);
	str obj2(s2);
	str obj3;
	
	while(1)
	{
		cout<<"\n \n MENU \n PRESS 1 FOR CONCATENATION \n PRESS 2 FOR STRING COPY \n PRESS 3 FOR SUB STRING REMOVAL \n PRESS 4 FOR COMPARISON OF STRING \n PRESS 5 FOR UPPER CASE \n PRESS 6 FOR LOWER CASE \n PRESS 6 TO DISPLAY THE LENGTH OF STRING \n ENTER YOUR OPTION :"<<endl;
		cin>>op<<endl;
		
		switch(op)
		{
			case 1:
			{
				obj3=obj1+obj2;
				cout<<" The concatenated string is :"<<obj3.s;
				return 1;
			}
		
			case 2:
			{
				obj1=obj2;
				cout<<" The string copied is :"<<obj1.s;
			}	return 1;
			
			case 3:
			{
			
			}
			
			case 4:
			{
			
			}
			
			case 5:
			{
				++obj;
				cout<<obj.s;
				return 1;

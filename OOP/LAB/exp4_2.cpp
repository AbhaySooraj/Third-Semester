#include<iostream>
#include<string.h>
using namespace std;

class str
{
	public:
	{
		char s[25];
		
		str()
		{
		}
		
		str(char st[])
		{
			strcpy(this->s,st);
		}
		
		void operator <=(str const & obj)
		{
			
















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
		
		str operator =(str const &obj)
		{
			str s3;
			strcpy(this->s,obj.s);
			return s3;
		}
};
int main()
{
	char s1[25]="B Tech";
	char s2[25]="Csbs ";
	str obj1(s1);
	str obj2(s2);
	obj1=obj2;
	cout<<obj1.s;
	return 1;
}







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
};
int main()
{
	char s1[25]="B Tech";
	char s2[25]="Csbs ";
	str obj1(s1);
	str obj2(s2);
	str obj3;
	obj3=obj1+obj2;
	cout<<obj3.s;
	return 1;
}





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
		
		void operator ++()
		{
			for(int i=0;i<strlen(this->s);i++)
			{
				this->s[i]=toupper(this->s[i]);
			}
		}
};

int main()
{
	str obj("BTech CSBS");
	++obj;
	cout<<obj.s;
	return 1;
}
*/

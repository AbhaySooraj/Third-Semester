#include<iostream>
using namespace std;

class mammal
{
	public:
		mammal()
		{
			cout<<endl<<"I am  mammal"<<endl;
		}
};

class marine
{
	public:
		marine()
		{
			cout<<endl<<"I am marine animal"<<endl;
		}
};

class bluewhale: private mammal,private marine
{
	public:
		bluewhale()
		{
			cout<<endl<<"Both Mammal and Marine animal"<<endl;
		}
};

int main()
{	
	cout<<"Mammal :"<<endl;
	mammal obj1;
	cout<<"Marine :"<<endl;
	marine obj2;
	cout<<"Both :"<<endl;
	bluewhale obj3;
}


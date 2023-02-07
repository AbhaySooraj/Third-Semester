#include<iostream>
using namespace std;
#define n 5

class array
{
	public:
		int i,arr[n],ror,j;
		
		void inputarray()
		{
			cout<<" Enter elements into the array :";
			for(i=0;i<n;i++)
            		{
                		cin>>arr[i];
            		}
	        }
	        
	        void printarray()
        	{
        		cout<<"The array is:";
		        for(i=0;i<n;i++)
	                {
	               	cout<<" "<<arr[i];
	                }
	        }
	        
	        void rotation()
        	{
            		cout<<"\nEnter number of rotation: ";
            		cin>>ror;
        	}
        	
        	void operator ++()
        	{
			rotation();
            		try
            		{
                		if(ror<0 or ror>4)
                		{
                    			throw "WRONG OPTION !!! NUMBER BETWEEN 1 TO 4 ALLOWED";
                		}
		               else
		               {
		               	int temp1, temp2;
		               	for(j=0;j<ror;j++)
                    {
                        temp1=arr[0];
                        arr[0]=arr[1];
                        temp2=arr[n-1];
                        arr[n-1]=temp1;
                        for(i=1;i<n-1;i++)
                        {
                            arr[i]=arr[i+1];
                        }
                        arr[n-2]=temp2;
                    }
                    cout<<"After rotation, ";
                }
                printarray();
                    		}	
                    	catch(const char *msg)
            		{
                		cerr<<msg;
 		        }
        }
};

int main()
{
    array obj1;
    obj1.inputarray();
    obj1.printarray();
    ++obj1;
}



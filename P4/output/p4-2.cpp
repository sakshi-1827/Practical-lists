// Demonstrate use of static member function
#include<iostream>
using namespace std;
class demo
{
	private :
		static int count;
		
	public:
		
		static int increment()
		{
			count++;
		}
		
};
int demo :: count=0;

int main()
{
		cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
	demo d;
	int call=d.increment();
	
	cout<<"count ::"<<call;
	
	
	return 0;
}
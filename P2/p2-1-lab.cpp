#include<iostream>
using namespace std;

class temp
{
	public:
			static int a;
			void display()
			{
				cout<<"Value of a is :: "<<a<<endl;
			}
			
};
int temp :: a = 10;
int main()
{
		cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
	temp t1;
	t1.display();
	return 0;
}

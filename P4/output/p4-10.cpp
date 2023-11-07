// Demonstrate use of default constructor 
#include<iostream>
using namespace std;
class area{
	int length,breath;
	public:
		area()
		{
			length=20;
			breath=30;
		}
		void display()
		{
			cout<<"Area of reatangle : "<<length*breath;
		}	
};
int main()
{
		cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
	area a1;
	a1.display();
}
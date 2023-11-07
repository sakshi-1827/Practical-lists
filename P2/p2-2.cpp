#include<iostream>
using namespace std;

class Myclass
{
	public:
		static int staticVar;
};

int Myclass::staticVar=10;

int main()
{
		cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Static Variable :: "<<Myclass::staticVar<<endl;
	
	Myclass::staticVar=20;
	
	cout<<"Modified Static Variable :: "<<Myclass::staticVar;
}

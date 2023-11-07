#include<iostream> 
using namespace std;
class A{
	public:
		A()
		{
			cout<<"This is Class A :) "<<endl;
		}
};
class B : public A{
	public:
		B(){
			cout<<"This is Class B";
		}
};
int main()
{
		cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
	B obj;
}
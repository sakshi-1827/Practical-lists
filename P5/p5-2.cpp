#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"This is class A : )"<<endl;
		}
};
class B : public A{
	public:
		B()
		{
			cout<<"This is class B : )"<<endl;
		}
};
class C : public B{
	public:
		C()
		{
			cout<<"This is class C : )"<<endl;
		}
};
int main()
{
		cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
	C obj;
	B obj1;
}
#include<iostream>
using namespace std;

int num1 = 5;
int num2 = 5;

int main()
{
		cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
	int sum;
	
	sum = ::num1 + ::num2;
	
	cout<<"Sum of numbers :: "<<sum;
	
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
		cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
	int no1,no2,temp;
	
	cout<<"Enter number 1 :: ";
	cin>>no1;
	
	cout<<"Enter number 2 :: ";
	cin>>no2;
	
	temp = no1;
	no1 = no2;
	no2 = temp;
	
	cout<<"Swaped number 1 :: "<<no1<<endl;
	cout<<"Swaped number 2 :: "<<no2<<endl;
	
	return 0;
}

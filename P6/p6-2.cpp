#include<iostream>
#include<fstream>
using namespace std;
int main()
{
		cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
	string srg;
	ifstream filestream("test.txt");
	if(filestream.is_open())
	{
		while(getline(filestream,srg))
		{
			cout<<srg<<endl;
		}
		filestream.close();
	}
	else
	{
		cout<<"File opening is fail"<<endl;
	}
	return 0;
}

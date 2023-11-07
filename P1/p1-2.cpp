#include<iostream>
using namespace std;

class fahToCel{
	
	private:
		int	fah, cel;
		
	public:
		void getdata()
		{
			cout<<"Enter fahrenheit :: ";
			cin>>fah;
			
			cel = (fah - 32) * 5/9;
		
		}
		void putdata()
		{
			cout<<"Celcius :: "<<cel; 
		}
		 
}; 

int main()
{
		cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
		fahToCel fc;
		fc.getdata();
		fc.putdata();
		fc.getdata();
		fc.putdata();
		fc.getdata();
		fc.putdata();
		fc.getdata();
		fc.putdata();
		fc.getdata();
		fc.putdata();
		return 0;
}

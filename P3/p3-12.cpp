#include<iostream>
using namespace std;

class Item{
    public:
        int number;
        int cost;
    public:
        void getData();
        
        void putData()
        {
            cout<<"Item number :: "<<number<<endl;
            cout<<"Cost :: "<<cost;
        }
};

void Item::getData()
    {   
            cout<<"Enter Item Number :: ";
            cin>>number;
            cout<<"Enter Cost :: ";
            cin>>cost;
    }

int main()
{
    	cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
    Item i1;


    i1.getData();
    i1.putData();

    return 0;
}

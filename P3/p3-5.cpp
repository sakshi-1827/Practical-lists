#include<iostream>
using namespace std;

class Distance{
    private:
        float feet; 
        float inches;

    public:
        void get_distance(){
            cout<<"Enter feet :: ";
            cin>>feet;
            cout<<"Enter inches :: ";
            cin>>inches;
        }

        void display_distance(){
            cout<<"Feet :: "<<feet<<endl;
            cout<<"Inches :: "<<inches<<endl;
        }
};

int main()
{
    	cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
    Distance d1;
    d1.get_distance();
    d1.display_distance();

    return 0;
}
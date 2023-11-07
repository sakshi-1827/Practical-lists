#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
    public:
        void get_details()
        {
            cout<<"Enter name :: ";
            cin>>name;
            cout<<"Enter age :: ";
            cin>>age;
        }
        
        void display_details()
        {   
            cout<<"Name :: "<<name<<endl;
            cout<<"Age :: "<<age<<endl;
        }
};

int main()
{
    	cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
    Student s1;
    s1.get_details();
    s1.display_details();

    return 0;
}
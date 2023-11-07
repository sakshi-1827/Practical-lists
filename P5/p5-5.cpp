#include<iostream>
using namespace std;
class Info{
        string name;
        int id;
    public:
        Info(string name,int id){
            this->name=name;
            this->id=id;
        }
        void display(){
            cout<<"Name : "<<name<<endl<<"ID : "<<id;
        }
};
int main(){
    	cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
    Info I("shyam panchasara",06);
    I.display();
}
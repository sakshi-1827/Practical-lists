#include<iostream>
using namespace std;
class Animal{
        public:
        // program 24 in lab manual
            virtual void eat(){
                cout<<"This is Animal class : ) "<<endl;
            }
            
            void show(){
                cout<<"This is base class  :) "<<endl;
            }
};
class Cow : public Animal{
        public:
            void eat(){
                cout<<"This is Cow : ) "<<endl;
            }
            void show(){
                cout<<"This is Sub class : ) "<<endl;
            }
};
int main(){
    	cout<<"I am Sakshi Doshi "<<endl;
	cout<<"En_no    220130318063 "<<endl;
	cout<<"---------------------"<<endl;
    Animal *a;
    Cow *c1 = new Cow();
    c1->eat();
    c1->show();
}
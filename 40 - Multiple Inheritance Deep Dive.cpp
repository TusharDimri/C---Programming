//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-41/

/*
In Multiple Inheritance we have a single derived class with more than one base classes.

Syntax:
class Derived: visibility-mode base1, visibility mode base-2{
    // Code
};

*/
#include<iostream>

using namespace std;

class Base1{
    protected:
        int base1data;
    public:
        void setBase1Data(int data){
            base1data = data;
        }
};

class Base2{
    protected:
        int base2data;
    public:
        void setBase2Data(int data){
            base2data = data;
        }
};

class Derived: public Base1, public Base2{
    public:
        void show(){
            cout<<"Base1 Data: "<<base1data<<" and Base2 Data: "<<base2data<<endl;
        }
};

/*

The inherited derived class will look something like this:
class Derived: public Base1, public Base2{
    protected:
        int base1data;
        int base2data;
    public:
        void setBase1Data(int data){
            base1data = data;
        }
        void setBase2Data(int data){
            base2data = data;
        }
        void show(){
            cout<<"Base1 Data: "<<base1data<<" and Base2 Data: "<<base2data<<endl;
        }
};

*/

int main(){
    Base1 b1;
    Base2 b2;
    Derived d;
    d.setBase1Data(32);
    d.setBase2Data(23);
    d.show();
    return 0;
}
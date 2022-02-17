// Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-43/
#include<iostream>

using namespace std;

class Base1{
    public:
        Base1(){}
        void greet(void){
            cout<<"Good Morning"<<endl;
        }
};

class Base2{
    public:
        Base2(){}
        void greet(void){
            cout<<"Good Evening"<<endl;
        }
};

class Derived:public Base1, public Base2{
    public:
        void greet(void){ // Code for Ambiguity Resolution.
            Base2::greet();
        }
};

class B{
    public:
        void say(void){
            cout<<"Hello World"<<endl;
        }
};
class D: public B{
    public:
        // The method below will override the function of class B with the same name.
        void say(void){ // The function of derived class with the same name as a function of a base class 
        // Here, the ambiguity is resolved by itself and the function of derived class is given preference over that of the base class.
            cout<<"Hello Everyone"<<endl; 
        }
};

int main(){
    // Ambiguity 1:
    Base1 obj1;
    obj1.greet();

    Base2 obj2;
    obj2.greet();

    Derived obj;
    obj.greet();

    //  Ambiguity 2:
    B b;
    b.say();
    D d;
    d.say();

    return 0;
}
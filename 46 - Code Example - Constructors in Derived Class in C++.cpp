//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-48/

/*
case 1:
Class B: public A{
    //  Order of execution of Constructor:
    1. A()
    2. B()
};

case2: 
class C: public A, public B{
    // Order of execution of Constructor:
    1. A(): As A is written first in inheritance, therefore its constructor is called first.
    2. B()
    3. C()
};

case3:
class C: public A, virtual public B{
    // Order pf execution of Constructor:
    1. B() : As B is a virtual Base Class, it's given preference.
    2. A()
    3. C()
};
*/

#include<iostream>

using namespace std;

class Base1{
    int data1;
    public:
        Base1(int d){
            data1 = d;
            cout<<"Base1 class's constructor called."<<endl;
        }
        void printDataBase1(void){
            cout<<"Data: "<<data1<<endl;
        }
        ~Base1(){
            cout<<"The destructor of class Base1 called."<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int d){
            data2 = d;
            cout<<"Base2 class's constructor called."<<endl;
        }
        void printDataBase2(void){
            cout<<"Data: "<<data2<<endl;
        }
        ~Base2(){
            cout<<"The destructor of class Base2 called."<<endl;
        }
};

class Derived: public Base1, virtual public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(c){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class's constructor called."<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1: "<<derived1
            <<" and that of derived2: "<<derived2<<endl;
        }
        ~Derived(){
            cout<<"The destructor of class Derived called."<<endl;
        }
};

using namespace std;

int main(){
    Derived d(1, 2, 3, 4);
    d.printDataBase1();
    d.printDataBase2();
    d.printDataDerived();
    return 0;
}
//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-46/

/*
Constructors in Derived Classes:
1. We can use constructors in derived classes in C++.
2. If base class constructor does not have any argument, then there is no need of a constructor in derived class.
3. If there are one or more arguments in the base class constructor, derived class need to pass arguments to the base class constructor.
4. If both base and derived classes have constructors, base class constructor is executed first. 
4. In multiple inheritance, base classes are constructed in order of which they appear is class declaration.
5. In multi level inheritance, the constructors are executed in order of inheritance.

Special Syntax:
1. C++ supports special syntax for passing arguments to multiple classes,.
2. The constructor of Derived class receives all the arguments at once and then will pass the calls to the respective base classes.
3. The body is called after all the constructors are finished executing.
Syntax is:
    Derived-Constructor (arg1, arg2, arg3,.....):Base1-Constructor(arg1, arg2), Base2-Constructor(arg3, arg4){
        .....
    }

Special Case of Virtual Base Class:
1. The constructors of virtual base classes are invokoed before a nonvirtual base class.
2. If there are multiple virtual base classes, they are invoked in the order in which they are declared.
3. Any non-virtual base class are then constructed before the derived class constructor is invoked.
*/ 

#include<iostream>

using namespace std;

class Base{
    protected:
        int a, b;
    public:
        Base(int a, int b){
            this->a = a;
            this->b = b;
            cout<<"Constructor of Base class called."<<endl;
        }
};

class Derived: private Base{
    int c, d;
    public:
        Derived(int a, int b, int c, int d):Base(a, b){
            this->c = c;
            this->d = d;    
            cout<<"Constructor of Derived class called."<<endl;
        }
        void display(void){
            cout<<"a: "<<a
            <<", b: "<<b
            <<", c: "<<c
            <<" and d: "<<d
            <<endl;
        }
};

int main(){
    Derived obj(1, 2, 3, 4);
    obj.display();
    return 0;
}
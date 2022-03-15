//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-56/
#include<iostream>

using namespace std;

//  A member function in the base class which is declared using virtual keyword is called virtual functions. They can be redefined in the derived class

class BaseClass{
    public:
        int base_var = 1;
        void virtual display(){ // virtual void display - 
            cout<<"1 Dispalying Base class variable var_base "<<base_var<<endl;
        }
};

class DerivedClass: public BaseClass{
    public:
        int derived_var = 4;
        void display(){
                cout<<"2 Dispalying Base class variable var_base "<<base_var<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<derived_var<<endl;
        }
        
};

int main(){
    BaseClass *base_class_pointer;
    
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;

    // As the display function of BaseClass is virtual, so in this clase, the display function of the Derived Class will be called. This is an example of Runtime Ploymorphism/ Late Binding.
    base_class_pointer->display();

    return 0;
}
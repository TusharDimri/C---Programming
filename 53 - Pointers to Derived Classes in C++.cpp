//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-55/

#include<iostream>

using namespace std;

class BaseClass{
    public:
        int base_var;
        void display(){
            cout<<"Dispalying Base class variable var_base "<<base_var<<endl;
        }
};

class DerivedClass: public BaseClass{
    public:
        int derived_var;
        void display(){
            cout<<"Dispalying Base class variable var_base "<<base_var<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<derived_var<<endl;
        }
        void test(){
            cout<<"Test"<<endl;
        }
};

int main(){
    BaseClass *base_class_pointer; // Pointer to BaseClass.
    
    BaseClass obj_base;
    DerivedClass obj_derived;

    // BaseClass pointer pointing to the object of the DerivedClass.
    base_class_pointer = &obj_derived;
    // This shows that BaseClass pointer can point to an object of the DerivedClass.

    base_class_pointer->base_var = 34; 

    // Even though this pointer is pointing to an object of DerivedClass, the overloaded function of the BaseClass is called/invoked(late Binding/Run Time Polymorphism).
    base_class_pointer->display();

    // BaseClassPointer is can only access the attributes of the BaseClass which have been inherited by the DerivedClass and it cannot access the variables of the derived class.
    // base_class_pointer->derived_var = 56; //Error

    DerivedClass *derived_class_pointer = &obj_derived;

    derived_class_pointer->derived_var = 54;
    derived_class_pointer->display(); // This is an example of Early Binding / Compile Time Polyorphism.

    // base_class_pointer->test(); // Error
    return 0;
}
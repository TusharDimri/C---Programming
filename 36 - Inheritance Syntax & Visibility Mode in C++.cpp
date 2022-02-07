//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-37/

/*
Derived Class syntax: 
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

*/


#include<iostream>

using namespace std;

//  Base Class(Inherited Class):
class Employee{
    public:
        int id;
        long salary;
        Employee(int id, float salary){
            this->id = id;
            this->salary = salary;
        }
        void display(){
            cout<<"ID: "<<this->id<<endl;
        }
        Employee(){}
};

//  Derived Class(Inheriting Class): 
class Programmer: public Employee{
    int language_code=9;
    public:
        Programmer(int lang_code, int id){
            this->language_code = lang_code;
            this->salary = 45000;
            this->id = id;
        }
};
/*
Visibility Mode:
If Visibility Mode is public then the public members(attributrs and methods) of base class will be public members of inheriting class.
If Visibility Mode is private then the public members (attributrs and methods) of base class will be private members of inheriting class.
By default,the visibility mode is private.

Note: 
A class's private members are not inheritable.
When we create a derived class's object the default constructor of the base class is called so we need a default constructor in base class.
*/

int main(){
    Employee tushar(21, 3000000);
    Programmer jimmy(8, 23);
    tushar.display();
    jimmy.display();
    return 0;
}
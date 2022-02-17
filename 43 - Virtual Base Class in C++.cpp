//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-44/ 
// Virtual Base Class is used to solve Diamond Problem in C++.

#include<iostream>

using namespace std;

class A{
    public:
        A(){}
        void say(void){
            cout<<"Hello World";
        }
};

class B: public virtual A{
    public:
        B(){}
};

class C: public virtual A{
    public:
        C(){}
};

class D: public B, public C{

};

int main(){
    D d;
    d.say();
    return 0;
}
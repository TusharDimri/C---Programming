//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-53/

//  “this” is a keyword that is an implicit pointer. “this” pointer points to the object which calls the member function. 

#include<iostream>

using namespace std;

class A{
    int a;
    public:
        void setData(int);
        void getData(void);
};

void A::setData(int a){
    // a = a // Garbage Value 
    this->a = a;
}

void A::getData(){
    cout<<this->a;
}

int main(){
    A obj;
    obj.setData(32);
    obj.getData();
    return 0;
}
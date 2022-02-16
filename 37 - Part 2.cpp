// Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-38/

#include<iostream>

using namespace std;

class Base{
    int data1; 
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base::setData(void){
    data1 = 1;
    data2 = 2;
}

int Base::getData1(void){
    // cout<<data1<<endl;
    return data1;
}

int Base::getData2(void){
    // cout<<data2<<endl;
    return data2;
}

class Derived: private Base{
    int data3;
    public:
        void process();
        void display();
};

void Derived::process(void){
    setData();
    data3 = data2 + getData1();
}

void Derived::display(void){
    cout<<"Value of\ndata1 is: "<<getData1()<<"\ndata2 is: "<<data2<<"\ndata3 is: "<<data3<<endl;
}

int main(){
    Base b;
    Derived d;

    d.process();
    d.display();

    return 0;
}
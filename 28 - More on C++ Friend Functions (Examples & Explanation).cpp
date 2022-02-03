//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-28/

#include<iostream>

using namespace std;

//                                                      Program 1:
/*
// Forward Declaration to let the complier know that this class is defined somehere.
class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);    
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X, Y);    

};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects gives me "<< o1.data + o2.num;
}


int main(){
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1);
    return 0;
}
*/


//                                                      Program 2
class B;

class A{
    int a;
    friend void swap(A &, B &);
    public:
        void setData(int a){
            this->a = a;
        }
        void getData(){
            cout<<"Value of a: "<<this->a<<endl;
        }
};

class B{
    int b;
    friend void swap(A &, B &);
    public:
        void setData(int b){
            this->b = b;
        }
        void getData(){
            cout<<"Value of b: "<<this->b<<endl;
        }
};

void swap(A &x, B &y){
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main(){
    A obj1;
    B obj2;

    obj1.setData(4); 
    obj2.setData(7); 
 
    obj1.getData();
    obj2.getData();

    swap(obj1, obj2);

    obj1.getData();
    obj2.getData();

    return 0;
}
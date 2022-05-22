//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-68/

#include<iostream>

using namespace std;

template<class T>
class Learn{
    T data;
    public:
        Learn(T a){
            this->data = a;
        }
        // void display(){
        //     cout<<data<<endl;
        // }
        void display();

};

template<class T>
void Learn<T>::display(){
    cout<<this->data<<endl;
}

void print(int a){ // Exact Match takes the highest Priority.
    cout<<a<<endl;
}

template<class T> 
void print(T a){
    cout<<a<<"(Printed using Template Function.)"<<endl;
}

int main(){
    Learn<int> obj1(9);
    obj1.display();
    Learn<float> obj2(4.7);
    obj2.display();
    print(4);
    print(5.7);
    return 0;
}

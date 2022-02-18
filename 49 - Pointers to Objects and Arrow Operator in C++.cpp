//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-51/

#include<iostream>

using namespace std;

class Complex{
    int real, imaginary;
    public:
        void setData(int r, int i){
            real = r;
            imaginary = i;
        }
        void getData(void){
            cout<<"Real part is: "<<real<<endl;
            cout<<"Imaginary part is: "<<imaginary<<endl;
            cout<<"Comolex Number is: "<<real<<"+"<<imaginary<<"i"<<endl;
        }
};

int main(){
    Complex num;
    // num.setData(3, 4);
    // num.getData();

    // Complex *ptr = &num;
    Complex *ptr = new Complex; // New keyword is udes to create object dynamically.

    // The precedence of .(dot) operator is higher than tha tof *(dereference) operator and this is why we use brackets in the code below.
    // *(ptr).setData(1, 4)
    // *(ptr).getData()

    //  To avoid complicated syntax we get when we use pointer to an object to access the object's attributes or functions, we use ->(arrow) operator.
    ptr->setData(1, 4);
    ptr->getData();
    return 0;
}


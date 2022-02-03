//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-25/

#include<iostream>

using namespace std;

class Complex
{
private:
    int real, complex;
public:
    void readData(){
        cout<< "Enter real part of the number: ";
        cin>>this->real;
        cout<< "Enter complex part of the number: ";
        cin>>this->complex;
    }

    void display(){
        cout<<"Complex Number is: "<<this->real<<" + "<<this->complex<<"i"<<endl;
    }

    void sum(Complex num1, Complex num2){ // This functions take objects of this class as its arguments.
        this->real = num1.real + num2.real;
        this->complex = num1.complex + num2.complex;
    }
};


int main(){
    Complex num1, num2, num3;
    num1.readData();
    num1.display();
    
    num2.readData();
    num2.display();

    num3.sum(num1, num2);
    num3.display();
    
}

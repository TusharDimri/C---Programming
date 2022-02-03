//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-31/

#include<iostream>

using namespace std;

class Complex{
    int a, b;
    public:
        Complex(){
            this->a = 0;
            this->b = 0;
        }
        Complex(int a){
            this->a = a;
            this->b = 0;
        }
        Complex(int a, int b){
            this->a = a;
            this->b = b;
        }

        void printData(){
            cout<<"Number is: "<< this->a<<" + "<<this->b<<"i"<<endl;
        }
};

int main(){
    Complex num1;
    num1.printData();

    Complex num2(4);
    num2.printData();

    Complex num3(8, 7);
    num3.printData();
}
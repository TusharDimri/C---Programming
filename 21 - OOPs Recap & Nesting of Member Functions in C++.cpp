// Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-22/

// OOPs - Classes and objects

// C++ --> initially called --> C with classes by Stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions:
#include<iostream>
#include<string>

using namespace std;

class Binary
{
    private:
        string data;
    public:
        void read(){
            cout<<"Enter a Binary Number: ";
            cin>>this->data;
        }
        void check_binary(){
            for(int i=0; i<this->data.length(); i++){
                if(this->data.at(i) != '0'  && this->data.at(i) != '1'){
                    cout<<"The given number is not a binary number"<<endl;
                    exit(0);
                }
            }
        }

        void onesComplement(){
            check_binary();
            for (int i = 0; i < this->data.length(); i++)
            {
                if(this->data.at(i) == '0')
                    cout<<"1";
                else
                    cout<<"0";
            }
        }
};


int main(){
    Binary b;
    b.read();
    b.check_binary();
    b.onesComplement();
}

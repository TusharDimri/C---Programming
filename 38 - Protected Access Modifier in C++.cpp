//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-39/

/*
Inheritance Table:
                            Public Derivation      	Private Derivation    	Protected Derivation
Private members           	  Not Inherited           Not Inherited             Not Inherited              
Protected members           	Protected               Private                    Protected                    
Public members           	      Public	            Private                    Protected                    
*/

#include<iostream>

using namespace std;

class Base{
    private:
        int a; // Very sensitive variable.
    protected:
        int b; // Sensitive variable but we want to inherit it.
        //  Protected data is just like private data(methods and attributes) but it is inheritable.
    public:
        int c = 1;
        
};

class Derived: protected Base{

};

int main(){
    Base b;
    Derived d;
    // cout<< d.b;
    // cout<<d.c; 
    // Protected memeber is just like a private member but it is inheritable.
    cout<<b.c;
    return 0;
}
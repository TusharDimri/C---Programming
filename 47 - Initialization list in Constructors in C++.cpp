//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-49/

/*
Initializtion list is used to initialize class objects.

Syntax for initialization list in constructor:
    Constructor(argument list): initialization-section{
        assignments + other code.
    }

For Example: 
    class Test{
        int a, b;
        public:
            Test(int i, int j): a(i), b(j){
                
            }
    };
*/

#include<iostream>

using namespace std;

class Test{
    int a, b;
    public:
        // Test(int i, int j): a(i), b(j)
        // Test(int i, int j): a(i), b(i+j)
        // Test(int i, int j): b(j), a(i+b)  // Garbage Value. This is because a is declared first and b after that in the class. << RED FLAG >>
        Test(int i, int j): a(i), b(a + j)  // This will work as variable a already has received its value.
        {
            cout<<"Constructor Invoked"<<endl;
            cout<<"Value of a is: "<<a<<endl;        
            cout<<"Value of b is: "<<b<<endl;        
        }
};

int main(){
    Test t(12, 13);
    return 0;
}
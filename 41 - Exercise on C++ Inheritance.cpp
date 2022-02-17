//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-42/

#include<iostream>
#include<math.h>

using namespace std;

/*
Create 2 Classes:
    1. Simple Calculator - Tkes 2 numbers as input using utility function and performs +, -, *, / and dislay the resukt using another utility function.
    2. Scientific Calculator. = Takes 2 numbers using utility function and performs any 4 scientific operations of your choice and display the results using another utility function.

    Create another class called hybrid calculator, and inherit it using these 2 classes. This 
    Q1, What type of inheritance are you using?
    Q2. Which mode of inheritance are you using?
    Q3 How is code reusability implemented?
*/

class SimpleCalculator{
    int a, b, ch;
    float result;
    public:
        SimpleCalculator(){}

        void SimpleCalculation(void){
            cout<<"Enter first number: ";
            cin>>a;
            cout<<"Enter second number: ";
            cin>>b;
            cout<<"Press:\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division"<<endl;
            cin>>ch;
            switch (ch)
            {
            case 1:
                result = a+b;
                break;
            case 2:
                result = a-b;
                break;
            case 3:
                result = a*b;
                break;
            case 4:
                if (b == 0){
                    cout<<"Zero Division Error."<<endl;
                    break;
                }
                result = (float)a/b;
                break;
            
            default:
                cout<<"Invalid Input";
                break;
            };
        }
        
        void displaySimple(void){
            cout<<"Result of the calculation: "<<result<<endl;
        }
};

class ScientificCalculator{
    int x, ch;
    float result;
    public:
        ScientificCalculator(){}

        void ScientificCalculation(void){
            cout<<"Enter a number: ";
            cin>>x;
            cout<<"Press:\n1 for sin\n2 for cos\n3 for tan\n4 for log"<<endl;
            cin>>ch;
            switch (ch)
            {
            case 1:
                result = sin(x);
                break;
            case 2:
                result = cos(x);
                break;
            case 3:
                result = tan(x);
                break;
            case 4:
                result = log(x);
                break;
            
            default:
                cout<<"Invalid Input";
                break;
            }
        }
        void displayScientific(void){
            cout<<"Result: "<<result<<endl;
        }
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator{
    
};

int main(){
    // SimpleCalculator cal1;
    // cal1.SimpleCalculation();
    // cal1.displaySimple();

    // ScientificCalculator cal2;   
    // cal2.ScientificCalculation();
    // cal2.displayScientific();
 
    HybridCalculator calc;
    
    calc.SimpleCalculation();
    calc.displaySimple();

    calc.ScientificCalculation();
    calc.displayScientific();

    return 0;
}

/*

Ans 1.Here we are using Multiple Inheritance. Derived class has more then 1 Base Classes.
HybridCalculator inherits publically from SimpleCalculator and ScientificCalculator. 

Ans 2. The derived class inherits publically from the base classes.

Ans 3. Code reusability is implemented here using Inheritance as the derived class can use the attributes and methods of the Base Classes so we don't have to write the same code again and reuse the code available to us.
*/
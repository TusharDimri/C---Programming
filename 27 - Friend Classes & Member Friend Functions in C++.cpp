//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-27/
#include<iostream>

using namespace std;

class Complex
{
    private: 
        int a, b;
        // Individually declaring functions as friends:
        //  friend int Calculator ::sumRealComplex(Complex, Complex);
        //  friend int Calculator ::sumCompComplex(Complex, Complex);
        
        // Adding a class as a friend class:
        friend class Calculator;

    public:
        void setNumber(int n1, int n2)
        {
            this->a = n1;
            this->b = n2;
        }

        void printNumber()
        {
            cout << "Your number is " << this->a << " + " << this->b << "i" << endl;
        }
};

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    int sumReal = o1.a + o2.a;
    return sumReal;
}

int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    int sumComplex = o1.b + o2.b;
    return sumComplex;
}



int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}

//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-66/

#include<iostream>
#include<string>

using namespace std;
 
template <class T1=int, class T2=float, class T3=char>
class Test{
    public:
        T1 a;
        T2 b;
        T3 c;
        Test(T1 x, T2 y, T3 z) {
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};

int main(){
    Test<int, char, string> obj1(2, 't', "Tushar");
    obj1.display();

    Test<> obj2(2, 4.5, 't');
    obj2.display();

    return 0;
}
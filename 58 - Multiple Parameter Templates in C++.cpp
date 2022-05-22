//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-65/

#include<iostream>
#include<string>

using namespace std;

template<class T1, class T2>
class Print{
    T1 a;
    T2 b;
    public:
        Print(T1 x, T2 y){
            this->a  = x;
            this->b  = y;
        }
        void display(){
            cout<<this->a<<endl<<this->b;
        }
};

int main(){
    Print<int, string> obj(1, "Tushar");
    obj.display();

    return 0;
}
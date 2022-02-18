//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-52/

#include<iostream>

using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Item ID: "<<id<<" and Item Price: Rs. "<<price<<endl;
        }

};

int main(){
    int size = 3, i;
    Shop *items = new Shop[size];
    int p;
    float q;

    for (i = 0; i < size; i++)
    {
        cout<<"Enter ID and Price of item "<<i+1<<": ";
        cin>>p>>q;
        (items+i)->setData(p, q);
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item Number: "<<i+1<<endl;
        (items+i)->getData();
    }
    

    return 0;
}
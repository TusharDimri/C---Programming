//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-67/

#include<iostream>

using namespace std;

/*
void swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}*/


template<class T>
void swapTwoNumbers(T *a, T *b){
    T temp  = *a;
    *a = *b;
    *b =  temp;    
}

int main(){
    int a = 4,b =5;
    cout<<a<<" "<<b<<endl;
    swapTwoNumbers(&a, &b);
    cout<<a<<" "<<b<<endl;  

    float x = 4.5, y=6.8;
    cout<<x<<" "<<y<<endl;  
    swapTwoNumbers(&x, &y);
    cout<<x<<" "<<y<<endl;  
    return 0;
}
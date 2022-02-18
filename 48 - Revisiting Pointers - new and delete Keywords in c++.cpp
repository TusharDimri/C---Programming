// Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-50/

#include<iostream>

using namespace std;

int main(){
    //  Basic
    // int x = 90;
    // int *p = &x;
    // cout<<x<<" "<<*p<<endl;

    // new keyword is used for dynamically allocating memeory.
    int *p = new int(4);
    float *q = new float(4.56);
    cout<<"The value at address p is: "<<*p<<endl;
    cout<<"The value at address q is: "<<*q<<endl;

    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    cout<<"The value of arr[0] is: "<<*(arr)<<endl;
    cout<<"The value of arr[1] is: "<<*(arr + 1)<<endl;
    cout<<"The value of arr[2] is: "<<*(arr + 2)<<endl;

    //  delete keyword is used to delete(or free) dynamically allocated memory.
    delete[] arr;
    cout<<arr[0]<<endl; // Garbage output.
    cout<<arr[1]<<endl; // Garbage output.
    cout<<arr[2]<<endl; // Garbage output.
 
    return 0;
}
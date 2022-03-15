// Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-54/

#include<iostream>

using namespace std;

/*
Polymorphism : one name many forms
“Poly” means several and “morphism” means form. So we can say that polymorphism is something that has several forms or we can say it as one name and multiple forms. There are two types of polymorphism.
*/

// Function Overloading and Operator Overloading are examples of compile time polymorphism.

int add(int a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}

int main(){
    int sum1 = add(1, 4);
    float sum2 = add(1.3f, 6.4f);
    cout << sum1<<"\n"<<sum2<<endl;   
}
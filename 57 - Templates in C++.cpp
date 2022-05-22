//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-63/
/*
Template -> Class(Template is a template for a Class)
Class -> Object(Class is a template for an Object)
Templates are also called as Parameterised Classes.
Why use templates?
-->DRY
-->Generic Programming
*/

#include<iostream>

using namespace std;

// class Vector{
//     int *arr;
//     int size;
//     public:
//         Vector(int m){
//             size = m;
//             arr = new int[size];
//             cout<<"Enter "<<size<<" elements: ";
//             for(int i=0;i<size;i++){
//                 cin>>arr[i];
//             }   
//         }
//         int dotProduct(Vector &v){
//             int d = 0;
//             for(int i=0; i<size;i++){
//                 d+= this->arr[i] * arr[i];
//             }
//             return d;
//         }
// };

template<class T>
class Vector{
    T *arr;
    int size;
    public:
        Vector(int m){
            size = m;
            arr = new T[size];
            cout<<"Enter "<<size<<" elements: ";
            for(int i=0;i<size;i++){
                cin>>arr[i];
            }
        } 
        T dotProduct(Vector &v1){
            T dot_product = 0;
            for(int i=0;i<size;i++){
                dot_product += this->arr[i] * v1.arr[i];
            }
            return dot_product;
        }
};

int main(){
    // Vector<int> v1(3);
    // Vector<int> v2(3);
    // cout<<v1.dotProduct(v2);
    Vector<float> v3(3);
    Vector<float> v4(3);
    cout<<v3.dotProduct(v4);
    return 0;
}
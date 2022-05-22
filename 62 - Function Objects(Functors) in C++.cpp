//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-74/

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    //  Function Objects (Functor) : A function wrapped in a class so that it is available like an object.
    
    int arr[] = {1, 4, 13, 54, 18};
    sort(arr, arr+5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Here, greater<int>() is a Function Object(Functor).
    sort(arr, arr+5, greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-11/

#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            break;
        }
        cout<<i<<" ";
    }

    cout<<endl;

    for (int j = 0; j < 40; j++)
    {
        /* code */
        if(j==2){
            continue;
        }
        cout<<j<<" ";
    }

    
    return 0;
}

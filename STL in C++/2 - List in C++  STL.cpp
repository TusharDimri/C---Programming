//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-71/
#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v1;
    int element;
    cout<<"Enter 3 numbers: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>element;
        v1.push_back(element);
    }
    display(v1);
    
    v1.pop_back();
    display(v1);

    vector<int> :: iterator iter = v1.begin(); // This iterator points to the first element of the vector supplied(v1 in this case).
    
    v1.insert(iter, 2, 32);

    display(v1);

    return 0;
}
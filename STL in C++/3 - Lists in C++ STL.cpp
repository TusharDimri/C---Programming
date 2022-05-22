//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-72/
#include<iostream>
#include<list>

/*
Liat is a Bidirectional liear storage which gives faster insertion and deletion of elements. Random Access is slow as data is not stored in contiguous memeory locations.  
*/

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator iter;
    for(iter = lst.begin(); iter!= lst.end(); iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1; // List of 0 length.
    list<int> list2(3); // Empty list of size.

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);
    
    list<int> :: iterator iter;
    cout<<"Enter the elements of the list: "<<endl;
    for(iter = list2.begin(); iter!= list2.end(); iter++){
        cin>>*iter;
    }

    display(list2);

    list1.pop_back();
    list1.pop_front();
    list1.remove(1); // Removes all the occurances of the given element.
    
    display(list1);
    
    list1.sort();
    list2.sort();
    list1.merge(list2);
    display(list1);

    list1.reverse();
    display(list1);

    return 0;
}
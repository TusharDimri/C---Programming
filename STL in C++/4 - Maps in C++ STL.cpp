// Link : https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-73/

#include<iostream>
#include<map>
#include<string>

using namespace std;

void display(map<string, long> &profitMap){
    map<string, long> :: iterator iter;
    for(iter = profitMap.begin(); iter != profitMap.end(); iter++){
        cout<<(*iter).first<<" "<<(* iter).second<<endl;
    }
}

int main(){
    map<string, long> profitMap;
    profitMap["Tushar"] = 8000000; 
    profitMap["John"] = 5600000; 
    profitMap["James"] = 230000; 
    profitMap["Jimmy"] = 3400000; 

    // display(profitMap);

    profitMap.insert(
    {
        {"Timmy", -234000},
        {"Brad", -69000}
    }
    );
    
    display(profitMap);
    cout<<profitMap.size()<<endl;
    cout<<profitMap.empty()<<endl;
    return 0;
}

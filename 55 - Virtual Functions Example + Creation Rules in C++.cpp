//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-57/

#include<iostream>
#include<string.h>

using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(){}
        CWH(string title, float rating){
            this->title = title;
            this->rating = rating;
        }
        virtual void display(){ // Can also be written as: void virtual display

        }
};

class CWHVideo: public CWH{
    float videoLength;
    public:
        CWHVideo(string title, float rating, float videoLength):CWH(title, rating){          
            this->videoLength = videoLength;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
        
};

class CWHText: public CWH{
    int wordCount;
    public:
        CWHText(string title, float rating, int wordCount):CWH(title, rating){          
            this->wordCount = wordCount;
        }
        void display(){
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words in this text tutorial is: "<<wordCount<<" words"<<endl;
        }
        
};




int main(){
    return 0;
}
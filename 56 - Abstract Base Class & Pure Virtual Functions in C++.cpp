//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-58/

#include<iostream>
#include<string.h>

using namespace std;

// Abstract base class is a class that has at least one pure virtual function in its body. The classes which are inheriting the base class must need to override the virtual function of the abstract class otherwise compiler will throw an error.

class CWH{  // This is an Abstract Base Class
    protected:
        string title;
        float rating;
    public:
        CWH(){}
        CWH(string title, float rating){
            this->title = title;
            this->rating = rating;
        }
       virtual void display()=0; // Pure Virtual Function / Do Nothing Function.
        // This function of the Base Class should be overriden by the derived classes of the Abstract Base Class.
};

class CWHVideo: public CWH{
    int videoLength;
    public:
        CWHVideo(string title, float rating, int videoLength):CWH(title, rating){          
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
    // For Video:
    string videoTitle = "C++ Tutorial";
    float videoRating = 4.5;
    int videoLength = 27;

    CWHVideo cpp_video_tutorial(videoTitle, videoRating, videoLength);
    // cpp_video_tutorial.display();

    // For Text:
    string textTitle = "C++ Tutorial";
    float textRating = 4.2;
    int wordCount = 500;

    CWHText cpp_text_tutorial(textTitle, textRating, wordCount);
    // cpp_text_tutorial.display();

    CWH *tuts[2]; // Array of Pointers

    tuts[0] = &cpp_video_tutorial;
    tuts[1] = &cpp_text_tutorial;
    
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
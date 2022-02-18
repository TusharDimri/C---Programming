//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-45/
/*
Student--> Test
Student--> Sports
Test--> Result
Sports--> Result
*/
#include<iostream>

using namespace std;

class Student{ // Virtual Base Class
    protected:
        int roll_no;
    public:
        Student(){}
        void setRollNumber(int num){
            roll_no = num;
        }
        void printNumber(void){
            cout<<"Roll Number: "<<roll_no<<endl;
        }
};

class Test: virtual public Student{
    protected:
        float maths, physics;
    public:
        Test(){}
        void setMarks(float m, float p){
            maths = m;
            physics = p;
        }
        void printMarks(void){
            cout<<"Marks in Maths: " <<maths
            <<" and Physics: " <<physics
            <<endl;
        }
};

class Sports:virtual public Student{
    protected: 
        float score;
    public:
        Sports(){}
        void setScore(float s){
            score = s;
        }
        void printScore(void){
            cout<<"Your PT Score is: "
            <<score
            <<endl;
        }
};

class Result: public Test, public Sports{
    float res;
    public:
        void result(void){
            res = (maths+physics+score)/3;    
        }      
        void printResult(void){
            printMarks();
            printScore();
            cout<<"Total: "<<res<<endl;
        }
};

int main(){
    Result r;
    r.setRollNumber(67);
    r.printNumber();
    r.setMarks(100, 85);
    r.setScore(100);
    r.result();
    r.printResult();

    return 0;
}
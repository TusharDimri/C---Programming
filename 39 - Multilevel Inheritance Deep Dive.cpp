//  Link: https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-40/

#include<iostream>

using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void setRollNumber(int n){
            roll_number = n;
        }
        void getRollNumber(void){
            cout<<"Roll Number: "<<roll_number<<endl;
        }
};

class Exam: public Student{
    protected:
        float maths;
        float physics;
    public:
        void setMarks(float m, float p){
            maths = m;
            physics = p;
        }
        void getMarks(void){
            cout<<"Maths: "<<maths<<" and Physics: "<<physics<<endl;
        }
};

class Result: public Exam{
    float percentage;
    public:
        void display(void){
            cout<<"Percentage: "<<(maths+physics)/2<<endl;
        }
};

//  Result extends Exam extends Student.
//  Student-->Exam-->Result--> is called Inheritacne Path.

int main(){
    Result td;
    td.setRollNumber(500);
    td.setMarks(98, 79);
    td.getMarks();
    td.display();
    return 0;
}
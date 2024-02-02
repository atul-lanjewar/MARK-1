#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;

    public:
    void set_roll_number(int);
    void get_roll_number();
};

void student::set_roll_number(int r){
    roll_number=r;
}

void student::get_roll_number(){
    cout<<roll_number<<endl;
}

class exam:public student{
    protected: 
    float maths;
    float physics;

    public:
    void set_marks(float,float);
    void get_marks();
};   

void exam::set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}

void exam::get_marks(){
    cout<<maths<<endl;
    cout<<physics<<endl;
}

class result:public exam{
    public:
    void display_result(){
        get_roll_number();
        get_marks();
        cout<<"percentage is"<<(maths+physics)/2<<endl;
    }
};

int main(){
    result harry;

    harry.set_roll_number(45);
    harry.set_marks(95.0,97.0);
    harry.display_result();
    return 0;
}
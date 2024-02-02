#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;

    public:
    void set_roll_number(int a){
        roll_number=a;
    }
    void get_roll_number(){
        cout<<roll_number<<endl;
    }
};
 
class test:virtual public student{
    protected:
    float maths;
    float physics;

    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void get_marks(){
        cout<<maths<<endl;
        cout<<physics<<endl;
    }
};

class sports:virtual public student{
    protected:
    float score;
    public:
    void set_score(float w){
        score=w;
    }

    void get_score(){
        cout<<score<<endl;
    }
};

class result:public test,public sports{
    private:
    float total;

    public:
    
    void display(){
        total=maths+physics+score;
        get_roll_number();
        get_marks();
        get_score();
        cout<<"total marks"<<total<<endl;
    }
};

int main(){
    result harry;
    harry.set_roll_number(35);
    harry.set_marks(98.0,89.9);
    harry.set_score(10);
    harry.display();
    return 0;
}


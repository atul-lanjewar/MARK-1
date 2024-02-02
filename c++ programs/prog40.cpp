#include<iostream>
using namespace std;

class Baseclass{
    public:
    int var_base;
    void display(){
        cout<<"displaying the value of var base"<<var_base<<endl;
    }
};

class derivedclass:public Baseclass{
    public:
    int var_derived;
    void display(){
        cout<<"value of var base"<<var_base<<endl;
        cout<<"value of var derived"<<var_derived<<endl;
    }
};

int main(){
    Baseclass * base_class_pointer;
    Baseclass base_object;

    derivedclass der_object;
    base_class_pointer=&der_object;

    base_class_pointer->var_base=322;
    base_class_pointer->display();

    base_class_pointer->var_base=42;
    base_class_pointer->display();

    derivedclass* derived_class_pointer;
    derived_class_pointer=&der_object;

    derived_class_pointer->var_base=56;
    derived_class_pointer->var_derived=254321;
    derived_class_pointer->display();
    return 0;
    }
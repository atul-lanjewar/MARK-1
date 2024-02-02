#include<iostream>
using namespace std;

class Y;

class X{
    int val1;
    friend void exchange(X &,Y &);
    
    public:
    void setdata(int data){
        val1=data;
    }
    void display(){
        cout<<"the value of your ob1 is"<<val1;
    }
};
class Y{
    int val2;
    friend void exchange(X &,Y &);
    
    public:
    void setdata(int data){
        val2=data;
    }
    void display(){
        cout<<"the value of your ob2 is"<<val2;
    }
};

void exchange(X & o1,Y & o2){
    int temp=o1.val1;
    o1.val1=o2.val2;
    o2.val2=temp;
}

int main(){
    X o1;
    o1.setdata(5);
    
    Y o2;
    o2.setdata(6);

    exchange(o1,o2);

    cout<<"the value of o1 after exchange is ";
    o1.display();
    cout<<"the value of o2 after exchange is ";
    o2.display();
    return 0;
}
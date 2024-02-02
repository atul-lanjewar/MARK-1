#include<iostream>
using namespace std;

class Base1{
    int data1;

    public:
    Base1(int i){
        data1=i;
    cout<<"base 1 cons. called"<<endl;
    }

    void printdatabase1(){
        cout<<"the value of data 1 is"<<data1<<endl;
    }
};

class Base2{
    int data2;

    public:
    Base2(int i){
        data2=i;
        cout<<"base2 cons. called"<<endl;
    }
    void printdatabase2(){
        cout<<"the value of data 2 is"<<data2<<endl;
    }
};

class derived:public Base1,virtual public Base2{
    int derived1;
    int derived2;
    public:
    derived(int a,int b,int c,int d):Base1(a),Base2(b){
        derived1=c;
        derived2=d;
    cout<<"derived class cons called"<<endl;
    }

    void printderived(){
        cout<<derived1<<endl;
        cout<<derived2<<endl;
    }
};

int main(){
    derived harry(1,2,3,4);

    harry.printdatabase1();
    harry.printdatabase2();
    harry.printderived();
    return 0;
}
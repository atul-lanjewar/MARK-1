#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    friend void add(X,Y);

    public:
    void setdata(int value){
        data=value;
    }
};

class Y{
    int num;
    friend void add(X,Y);

    public:
    void setdata(int value){
        num=value;
    }
};

void add(X o1,Y o2){
    cout<<o1.data+o2.num;
}

int main(){
    X o1;
    o1.setdata(53);

    Y o2;
    o2.setdata(54);

    add(o1,o2);

    return 0;
}
#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
    void setvalue(int v1,int v2){
        a=v1;
        b=v2;
    }

    void setdatabysum(complex o1,complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }

    void printdata(){
        cout<<"the value of your complex no is"<<a<<"+"<<b<<"i"<<endl;
    }
};

int main(){
    complex c1,c2,c3;

    c1.setvalue(1,4);
    c1.printdata();

    c2.setvalue(6,7);
    c2.printdata();

    c3.setdatabysum(c1,c2);
    c3.printdata();

    return 0;
}
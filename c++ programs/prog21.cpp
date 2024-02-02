#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }

    friend complex sumcomplex(complex o1,complex o2);

    void printnumber(){
        cout<<"the value of your number is"<<a<<"+"<<b<<"i"<<endl;

    }
};

complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    complex o1,o2,sum;

    o1.setdata(4,3);
    o1.printnumber();

    o2.setdata(5,7);
    o2.printnumber();

    sum=sumcomplex(o1,o2);
    sum.printnumber();

    return 0;
}
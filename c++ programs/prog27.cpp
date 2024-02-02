#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:
    Complex(){
        a=0;
        b=0;
    }
    Complex(int x,int y){
        a=x;
        b=y;
    }
    Complex(int x){
        a=x;
        b=0;
    }
    void printnumber(){
        cout<<"the value of your no is"<<a<<"+"<<b<<"i";
    }
};

int main(){
    Complex a;
    a.printnumber();

    Complex b(4,5);
    b.printnumber();

    Complex c(6);
    c.printnumber();

    return 0;
}

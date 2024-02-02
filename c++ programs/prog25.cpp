#include<iostream>
using namespace std;

class Complex{
    int x,y;

    public:
    Complex(int ,int);
    void printnumber(){
        cout<<"the value of your no is"<<x<<"+"<<y<<"i";
    }
};

Complex::Complex(int a,int b){
    x=a;
    y=b;
}

int main(){
    Complex a(3,4);
    a.printnumber();

    Complex b=Complex(5,6);
    b.printnumber();

    return 0;
}
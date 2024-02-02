#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:
    Complex(void);
    void printnumber(){
        cout<<"the no is"<<a<<"+"<<b<<"i";
    }
};

Complex:: Complex(){
    a=10;
    b=20;
    cout<<"hello world"<<endl;
}

int main(){
    Complex o1,o2,o3;
    o1.printnumber();
    o2.printnumber();
    o3.printnumber();
    return 0;

}
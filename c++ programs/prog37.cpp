#include<iostream>
using namespace std;

class complex{
    int real;
    int imaginary;

    public:
    void getdata(){
        cout<<real<<endl;
        cout<<imaginary<<endl;
    }

    void setdata(int a,int b){
        real=a;
        imaginary=b;
    }
};

int main(){
    //complex c1;
    //complex* ptr=&c1;
    complex* ptr=new complex[3];
    ptr->setdata(3,4);
    ptr->getdata();

    (ptr+1)->setdata(4,5);
    (ptr+1)->getdata();
    return 0;
}
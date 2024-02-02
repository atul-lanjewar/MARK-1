#include<iostream>
using namespace std;

class Base1{
    protected:
    int base1int;

    public:
    void setbase1int(int r){
        base1int=r;
    }
};

class base2{
    protected:
    int base2int;

    public:
    void setbase2int(int r){
        base2int=r;
    }
};

class derived:public Base1,public base2{
    public:
    void show(){
        cout<<base1int<<endl;
        cout<<base2int<<endl;
        cout<<"sum"<<base1int+base2int<<endl;
    }
};

int main(){
    derived harry;
    harry.setbase1int(30);
    harry.setbase2int(40);
    harry.show();
    return 0;
}
#include<iostream>
using namespace std;

class b{
    public:
    void say(){
        cout<<"hello world"<<endl;
    }
};

class d:public b{
    public:
    void say(){
        cout<<"I'am ironman"<<endl;
    }
};

int main(){
    b rat;
    rat.say();

    d fay;
    fay.say();

    return 0;
}
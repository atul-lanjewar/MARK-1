#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    int data3;

    public:
    simple(int a,int b=4,int c=5){
        data1=a;
        data2=b;
        data3=c;
    }
    void display(){
        cout<<data1<<data2<<data3;
    }
};

int main(){
    simple k(3);
    k.display();
    return 0;
}
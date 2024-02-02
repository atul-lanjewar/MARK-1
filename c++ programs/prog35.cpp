#include<iostream>
using namespace std;

class Test{
    int a;
    int b;
    public:
    Test(int i,int j):a(i),b(a+j){
        cout<<"cons is called"<<endl;
        cout<<"valueof a"<<a<<endl;
        cout<<"value fo b"<<b<<endl;
    }
};

int main(){
    Test t(3,4);
    return 0;
}
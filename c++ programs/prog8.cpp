#include<iostream>
using namespace std;

int main(){
    int a=3;
    int*b=&a;
    int** c=&b;

    cout<<"the value of a is"<<a<<endl;
    cout<<"the address at b is"<<&a<<endl;
    cout<<"the address at b is"<<b<<endl;
    cout<<"the value at a is"<<*b<<endl;
    cout<<"the value of c is"<<&b<<endl;
    cout<<"the address of b is"<<*c<<endl;
    cout<<"the address of b is"<<*c<<endl;
    cout<<"the value at a is"<<**c<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* ptr=&a;
    cout<<"the value at ptr"<<*ptr<<endl;

    int* b=new int(32);
    cout<<"the value at b"<<*b<<endl;

    int* arr=new int[3];
    arr[0]=6;
    arr[1]=7;
    arr[2]=8;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    delete b;
    delete []arr;
    return 0;

}
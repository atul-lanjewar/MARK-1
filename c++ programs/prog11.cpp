#include<iostream>
using namespace std;

int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}

int main(){
    int num1,num2;

    cout<<"enter num1"<<endl;
    cin>>num1;
    cout<<"enter num2"<<endl;
    cin>>num2;

    cout<<sum(num1,num2);
    return 0;
}
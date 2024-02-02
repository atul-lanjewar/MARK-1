#include<iostream>
using namespace std;
int c=34;

int main(){
    int num1,num2,c;
    cout<<"enter the value of num 1\n";
    cin>>num1;
    cout<<"enter the value of num 2\n";
    cin>>num2;
    c=num1+num2;
    cout<<"the value of sum is"<<c<<endl;
    cout<<"the value of sum is"<<::c<<endl;
    return 0;


}
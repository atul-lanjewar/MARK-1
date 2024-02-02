#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    cout<<fib(n)<<endl;
    cout<<fact(n)<<endl;

    return 0;
}
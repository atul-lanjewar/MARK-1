#include<iostream>
using namespace std;

int main(){
    int a=5,b=6;
    //arithmatic operaters
    cout<<"the value of a+b"<<a+b<<endl;
    cout<<"the value of a-b"<<a-b<<endl;
    cout<<"the value of a*b"<<a*b<<endl;
    cout<<"the value of a/b"<<a/b<<endl;
    cout<<"the value of a%b"<<a%b<<endl;
    cout<<"the value of a++"<<a++<<endl;
    cout<<"the value of a--"<<a--<<endl;
    cout<<"the value of ++a"<<++a<<endl;
    cout<<"the value of --a"<<--a<<endl;

    //comparison operaters
    cout<<"the value of a==b"<<(a==b)<<endl;
    cout<<"the value of a<=b"<<(a<=b)<<endl;
    cout<<"the value of a>=b"<<(a>=b)<<endl;
    cout<<"the value of a>b"<<(a>b)<<endl;
    cout<<"the value of a<b"<<(a<b)<<endl;
    cout<<"the value of a!=b"<<(a!=b)<<endl;

    //logical operaters
    cout<<"the value of 1 case"<<((a==b)&&(a<b));
    cout<<"the value of 2 case"<<((a==b)||(a<b));
    cout<<"the value of 3 case"<<(!(a<b));
}
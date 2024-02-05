#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int num=2;

    while(num<n){
        if(n%num==0){
            cout<<"the no is not prime"<<endl;
            
        }
        else{
            cout<<"the no is prime for"<<num<<endl;
        }
        num=num+1;
    }
    
    
    return 0;
}
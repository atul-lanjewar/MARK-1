#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int i=0;
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while(i<=n){
           sum=sum+i;
           i++;
    }
    cout<<sum<<endl;
}
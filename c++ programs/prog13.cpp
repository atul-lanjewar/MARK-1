#include<iostream>
using namespace std;

int & swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;
}
int main(){
    int x=5,y=4;
     swap(x,y)=567;
    cout<<"the value of x and y after swap is"<<x<<"and"<<y;
    return 0;
}
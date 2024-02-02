#include<iostream>
using namespace std;


int volume(int a,int b,int c){
    return a*b*c;
}

int volume(int a,int b){
    return (3.14*a*a*b);
}
int volume(int a){
    return (a*a*a);
}

int main(){
    int a=2,b=3,c=4;
    cout<<"the volume of cylinder  is"<<volume(a,b)<<endl;
    cout<<"the volume of cuboid is"<<volume(a,b,c)<<endl;
    cout<<"the volume of cube  is"<<volume(a)<<endl;
    return 0;
}
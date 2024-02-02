#include<iostream>
using namespace std;

class Point{
    int x,y;

    public:
    Point(int,int);
    void display(void){
        cout<<"the value of your no is"<<x<<","<<y<<endl;

    }
};

Point::Point(int a,int b){
    x=a;
    y=b;
}

int main(){
    Point o1(5,6);
    o1.display();
    return 0;
}
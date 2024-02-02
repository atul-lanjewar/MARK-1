#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;

    public:
    void setdata(){
        salary=122;
        cout<<"enter the id"<<endl;
        cin>>id;
    }

    void getid(){
        cout<<"your id is"<<id<<endl;
    }
};

int main(){
    employee tesla[4];

    for(int i=0;i<4;i++){
        tesla[i].setdata();
        tesla[i].getid();
    }

    return 0;
}
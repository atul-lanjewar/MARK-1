#include<iostream>
using namespace std;

class shopitem{
    int id;
    float price;

    public:
    void setdata(int a,float b){
        id=a;
        price=b;
    }
    void getdata(){
        cout<<id<<endl;
        cout<<price<<endl;
    }
};

int main(){
    int size=3;

    shopitem* ptr=new shopitem[size];
    shopitem* ptrtemp=ptr;

    int p,i;
    float q;

    for(i=0;i<size;i++){
        cout<<"enter the id and price"<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }

    for(i=0;i<size;i++){
        ptrtemp->getdata();
        ptrtemp;
        ptrtemp++;
    }
    return 0;
}
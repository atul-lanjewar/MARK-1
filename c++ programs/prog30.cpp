#include<iostream>
using namespace std;

class base{
    private:
    int data1;
    public:
    int data2;
    void set_data();
    int get_data1(){
        return data1;
    }
    int get_data2(){
        return data2;
    }
};

void base::set_data(){
    data1=10;
    data2=20;
}

class derived:private base{

    int data3;
    public:
    void process();
    void display();
};

void derived::process(){
    set_data();
    data3=data2*get_data1();
}

void derived::display(){
    cout<<get_data1<<endl;
    cout<<data2<<endl;
    cout<<data3<<endl;
}

int main(){
    derived harry;
    harry.process();
    harry.display();
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;

    if((age<18)&&(age>0)){
        cout<<"you cannot come to the party"<<endl;
    }
    else if(age==18){
        cout<<"you can get kid pass"<<endl;
    }
    else if(age<0){
        cout<<"you are not born"<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;
    }

    return 0;
}

    




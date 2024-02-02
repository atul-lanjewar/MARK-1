#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;

    switch(age){
        case 18:{
            cout<<"you can get pass"<<endl;
            break;
        }
        case 22:{
            cout<<"you can come to the party"<<endl;
            break;
        }
        case 1:{
            cout<<"you are a kid"<<endl;
            break;
        }
        default:{
            cout<<"no cases matched"<<endl;
        }

        return 0;
    }
}
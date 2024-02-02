#include<iostream>
using namespace std;

int main(){
    int marks[]={23,24,25,26};
    marks[1]=34;
    int j=0;
    int k=0;
    // int mathmarks[5];
    // mathmarks[0]=2345;
    // mathmarks[1]=2341;
    // mathmarks[2]=2346;
    // mathmarks[3]=2348;
    // mathmarks[4]=2349;
    // cout<<"the value of marks 0"<<marks[0]<<endl;
    // cout<<"the value of marks 1"<<marks[1]<<endl;
    // cout<<"the value of marks 2"<<marks[2]<<endl;
    // cout<<"the value of marks 3"<<marks[3]<<endl;

    // cout<<"the value of mathmarks 0"<<mathmarks[0]<<endl;
    // cout<<"the value of mathmarks 1"<<mathmarks[1]<<endl;
    // cout<<"the value of mathmarks 2"<<mathmarks[2]<<endl;
    // cout<<"the value of mathmarks 3"<<mathmarks[3]<<endl;
    // cout<<"the value of mathmarks 4"<<mathmarks[4]<<endl;

    for(int i=0;i<4;i++){
        cout<<"the value at i is"<<marks[i]<<endl;
    }

    do{
        cout<<"the value at" <<j <<"is"<<marks[j]<<endl;
        j++;
    }while(j<4);

    while(k<4){
        cout<<"the value at "<<k<<"is"<<marks[k]<<endl;
        k++;
    }

    return 0;
}
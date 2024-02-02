#include<iostream>
using namespace std;

int glo=6;
int sum(){
    int a;
    cout<<glo;
}

int main(){
    int glo=34;
    glo=53;
    bool my_true=false;
    cout<<my_true;
    sum();
    cout<<glo;
    return 0;
}
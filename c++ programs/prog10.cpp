#include<iostream>
using namespace std;

typedef struct employee
{
    int id;
    char favchar;
    float salary;
}ep;

union money{
    int rice;
    char car;
    float pounds;
};


int main(){
    ep harry;
    harry.id=345;    
    harry.favchar='s';    
    harry.salary=12000000;    

    union money atul;
    atul.car='l';

    cout<<harry.id<<endl;
    cout<<harry.favchar<<endl;
    cout<<harry.salary<<endl;

    cout<<atul.car<<endl;

    enum meal{breakfast,lunch,dinner};
    meal m1;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<m1<<endl;
}

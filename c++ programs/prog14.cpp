#include<iostream>
using namespace std;

 int moneyreceived(int money,float interest=1.04){
    return money*interest;
 }

int main(){
    int money=100000;
    cout<<"if you have"<<money<<"in your account you will get"<<moneyreceived(money)<<"from bank"<<endl;
    cout<<"for VIP:if you have"<<money<<"in your account you will get"<<moneyreceived(money,1.1)<<"from bank"<<endl;
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    for(int i=0;i<4;i++){
        cout<<arr[0+i]<<arr[7-i]<<endl;
    }
}

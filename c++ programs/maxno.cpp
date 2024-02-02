#include<iostream>
using namespace std;
 
int main(){
    int arr[]={1,2,3,4,5,9};
    int max = 0;
    for(int i=0;i<6;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
}
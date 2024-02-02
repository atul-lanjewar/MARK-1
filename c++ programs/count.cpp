#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,0,0,0,1};
    int count1= 0;
        int count2=0;
    for(int i=0;i<6;i++){
        if(arr[i]==1){
            count1=count1+1;
        }
        if(arr[i]==0){
            count2=count2+1;
        }

    }
    cout<<count1<<endl;
    cout<<count2<<endl;
    return 0;
}
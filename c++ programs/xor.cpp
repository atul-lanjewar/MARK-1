#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,1,3,2,2};
    int size = sizeof(arr)/sizeof(int);
    
    int result = 0;
    for(int i=0;i<size;i++){
        result = result^arr[i];
    }
    cout<<result<<endl;
    return 0;
}
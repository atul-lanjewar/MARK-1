#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    vector<int>vecfromarray(arr,arr+6);
    cout<<"Vector:"<<endl;
    cout<<vecfromarray.size()<<endl;
    cout<<vecfromarray.capacity()<<endl;
    for(int i)
}
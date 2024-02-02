#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>temp = {1,2,3};
    cout<<temp.size()<<endl;
    cout<<temp.capacity()<<endl;
    temp.push_back(5);
    cout<<temp.size()<<endl;
    cout<<temp.capacity()<<endl;
    temp.pop_back();
    cout<<temp.size()<<endl;
    cout<<temp.capacity()<<endl;
    temp.pop_back();
    temp.pop_back();
    cout<<temp.size()<<endl;
    cout<<temp.capacity()<<endl;
    temp.pop_back();
    cout<<temp.size()<<endl;
    cout<<temp.capacity()<<endl;
    return 0;


}
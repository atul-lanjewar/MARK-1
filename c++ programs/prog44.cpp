#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("sample80.txt");
    string name;
    cout<<"enter your name"<<endl;
    cin>>name;
    out<<"your name is"+name;
    out.close();
    ifstream in("sample80.txt");
    string content;
    getline(in,content);
    cout<<content;
    in.close();
    return 0;
}
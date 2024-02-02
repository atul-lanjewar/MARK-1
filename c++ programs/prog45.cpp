#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample1.txt");
    out<<"this is me\n";
    out<<"atul is deadly";
    out<<"yeah! but an ironman";
    out.close();

    ifstream in;
    in.open("sample1.txt");
    string st;
    while(in.eof()==0){
        getline(in,st);
        cout<<st;
    }
    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s1="I'am ironman";
    string s2;

    ofstream out("sample60.txt");
    out<<s1;

    ifstream in("sample60b.txt");
    
    // in>>s2;
    getline(in,s2);
    
    cout<<s2;
    return 0;
}
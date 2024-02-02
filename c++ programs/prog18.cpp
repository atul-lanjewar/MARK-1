#include<iostream>
#include<string>
using namespace std;

class binary{
    private:
        string s;
        void chk_bin(void);

        public:
        void read(void);
        void ones_compliment(void);
        void display(void);
};

void binary::read(void){
    cout<<"enter your name"<<endl;
    cin>>s;
}

void binary::chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"your string is not binary"<<endl;
            exit(0);
        }
    }
    1
    }

void binary::ones_compliment(void){
    chk_bin();

    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void binary::display(void){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    binary atul;

    atul.read();
    atul.ones_compliment();
    atul.display();

    return 0;
}
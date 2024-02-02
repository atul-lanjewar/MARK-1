#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;

    public:
    CWH(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display()=0;
};

class CWHVIDEO:public CWH{
    float videolength;

    public:
    CWHVIDEO(string s,float r,float vl):CWH(s,r){
        videolength=vl;
    }

  void display(){
    cout<<title<<1<<endl;
    cout<<rating<<1<<endl;
    cout<<videolength<<1<<endl;
  }
};

class CWHtext:public CWH{
    int words;

    public:
    CWHtext(string s,float r,int wc):CWH(s,r){
        words=wc;
    }

    void display(){
        cout<<title<<2<<endl;
        cout<<rating<<2<<endl;
        cout<<words<<2<<endl;
    }
};

int main(){
    string title="ironman";
    float rating=5;
    float vl=45;
    int words=39;

    CWH* base_pointer;
    CWHVIDEO djvideo(title,rating,vl);
    base_pointer=&djvideo;
    base_pointer->display();

    CWH*base_2_pointer;
    CWHtext djtext(title,rating,words);

    base_2_pointer=&djtext;
    base_2_pointer->display();

    CWH* tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
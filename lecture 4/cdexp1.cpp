// cdexp1
#include<bits/stdc++.h>
using namespace std;

class Token{

public:
    string s;
    int id;

Token(string x){
    s=x;
}
};
void fail(){
    cout<<"LEXAL ERROR"<<endl;
}
bool while_nfa(){
string in;
cin>>in;
Token *t=new Token(in);
    int state=0;
    string d=t->s;
    int len=d.size();
    int i=0;
    while(true){
        if(state==5){
            return true;
        }
char ch=t->s[i];
        switch(state){
    case 0:
        if(ch=='w'){
            state=1;
        }
        else{
            fail();
            return false;
        }
        break;
    case 1:
        if(ch=='h'){
            state=2;
        }
        else{
            fail();
            return false;
        }
        break;
    case 2:
        if(ch=='i'){
            state=3;
        }
        else{
            fail();
            return false;
        }
        break;
    case 3:
        if(ch=='l'){
            state=4;
        }
        else{
            fail();
            return false;
        }
        break;
    case 4:
        if(ch=='e'){
            state=5;
        }
        else{
            fail();
            return false;
        }
        break;
    case 5:
            return true;
            break;
        }
        i++;
    }

}

int main(){

    bool is_while=while_nfa();
    if(is_while){
        cout<<"<While>"<<endl;
    }
    return 0;
}
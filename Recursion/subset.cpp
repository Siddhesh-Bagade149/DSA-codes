#include<iostream>
using namespace std;
void subset(string str,string op,int i){
    if(i==str.length()){
        cout<<op<<endl;
        return;
    }
    //include
    // op+=str[i];
    subset(str,op+str[i],i+1);
    subset(str,op,i+1);
    // cout<<"function end line\n";
}
int main(){
string str ="abc";
subset(str,"",0);
// cout<<str+1;
return 0;
}
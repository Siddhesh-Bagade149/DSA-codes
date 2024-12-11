#include<bits/stdc++.h>
using namespace std;

void subset(string str,string op=""){
    if(str.empty()){
        cout<<op<<"\n";
        return ;
    }
    char ch=str[0];
    subset(str.substr(1),op+ch);
    subset(str.substr(1),op);
}
int main(){
subset("abc","");
return 0;
}
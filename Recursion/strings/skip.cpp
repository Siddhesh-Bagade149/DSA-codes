/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
/*
string solve(string str,int indx=0,string ans=""){
    if(indx>=str.length()){
        return ans;
    }
    if(str[indx]!='a'){
        ans+=str[indx];
        return solve(str,indx+1,ans);
    }
    else{
        return solve(str,indx+1,ans);
    } 
    
}
*/
string skipStr(string str,string val){
    if(str.empty()){
        return "";
    }
    if(str.starts_with(val)){
        return skipStr(str.substr(val.length()),val);
    }
    else{
        return str.at(0) + skipStr(str.substr(1),val);
    }
}

int main()
{
    string str = "javatpoint" ; 
    string ans=skipStr(str,"java");
    cout<<ans;   
    return 0;
}
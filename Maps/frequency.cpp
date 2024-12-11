 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    string list[]={"abc","bbc","bbc","abc"};
    int n=4;
    map<string,int> nameCount;
        for(int i=0;i<n;i++){
            nameCount[list[i]]++;
        }
        int cnt=0;
        for(auto i:nameCount){
            if(i.second==2)
            cnt++;
        }
         cout<<cnt;  
 }
 
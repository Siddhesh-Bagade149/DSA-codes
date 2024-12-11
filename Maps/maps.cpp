#include<iostream>
#include<map>
#include<unordered_map>
#include<string>

using namespace std;
int main(){

string list[]={"ab","bc","cd","de","ab"};
unordered_map<string,int> freq;
for(auto i : list){
    freq[i]++;
    //maps me key value pair hota hia to agr mai freq[i]++ nhi likhunga to meri key ki value bhegi he nhi
    // agar kisi same key ko dusri value du to alue update hogi n ki add!! 
}
// for(auto i:freq){
//     cout<<i.first<<" "<<i.second<<" \n";
// }
cout<<freq["ab"];
return 0;
}
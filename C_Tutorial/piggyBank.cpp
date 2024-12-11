#include<iostream>
using namespace std;
class AddAmount{
    int amount = 50;
    public:
            AddAmount(){
                // amount = 50;
            }
            AddAmount(int a){
               cout<<"Enter money ";
               cin>>a;
                amount = a+amount;
            }
            void Print(){
                cout<<"Money = "<<amount<<endl;
            }
};
 

 
int main()
{   AddAmount P;
    AddAmount Q(50);

P.Print();
Q.Print();
return 0;
}
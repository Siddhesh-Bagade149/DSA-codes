#include <iostream>
using namespace std;
class Student
{
    int a;
  /*  public : Student(){}
             Student(){
                 cout<<"Roll num : "<<a;
             }*/
             public:
    void put_num(int R_No)
    {
        a = R_No;
    }
    void show_num()
    {
        cout << "Roll num : " << a<<endl;
    }

};
class Test : virtual public Student
{ protected :
    int sub1;
    public : void get_test(int score){
            sub1= score;
    }
            void show_test(){
                cout<<"Theory Marks = "<<sub1<<endl;
            }
};
class Sports : virtual public Student
{protected :
     int c;
    public :
    void get_sport(int s){
            c= s;
    }
            void show_test(){
                cout<<"Prac Marks = "<<c<<endl;
            }
};
class Result : public Test,public Sports{
int total ;
public : void display(){
    total = sub1 + c ;
    show_num();
   Test:: show_test();
   Sports :: show_test();
   cout<<"Total marks = "<<total<<endl;

}
};
int main()
{ Result joe ;
joe.put_num(12);
joe.get_test(70);
joe.get_sport(90);
joe.display();
    return 0;
}
#include <iostream>
using namespace std;

class health
{
private:
    int h;
    

public:
 
    void read_health(void);
    void check_health(void);
    void use_boost();
};
void health ::read_health(void)
{
    cout << "enter health ";
    cin >> h;
}
void health ::check_health(void)
{
    if (h < 30)
    {
        cout << "low health \n";
        cout << "use booster \n";
    }
    else cout<<"medium health";
}
void health ::use_boost()
{
    if (h < 30)
    {
        cout << "using booster , health before = " <<h<<endl ;
        cout << "health now = "<<h+50<<endl;
    
    }
}

int main()
{ 
    health harry;   
harry.read_health();
harry.check_health();
harry.use_boost();
    return 0;
}
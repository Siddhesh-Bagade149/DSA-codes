#include <iostream>
#include <math.h>
using namespace std;
class calculator
{
protected:
    float a, b;

public:
    void getNum()
    {
        cout << "Enter 2 num :" << endl;
        cin >> a >> b;
    }
    void display()
    {
        cout << "Adddition = " << a + b << endl;
        cout << "Subtration = " << a - b << endl;
        cout << "multiplication = " << a * b << endl;
        cout << "division = " << a / b << endl;
    }
};
class SC_calc
{
protected:
    int c;

public:
    void getAngle()
    {
        cout << "Enter angle in radians : ";
        cin >> c;
    }
    void display()
    {
        cout << "cos(" << c << ")"
             << "=" << cos(c) << endl;
        cout << "sin(" << c << ")"
             << "=" << sin(c) << endl;
        cout << "tan(" << c << ")"
             << "=" << tan(c) << endl;
    }
};
class hybrid_calc : public calculator, public SC_calc
{   public:
    void displayAll()
    {
    calculator :: display();
      SC_calc ::  display();
    }
};
int main()
{
    hybrid_calc dog;
    dog.getNum();
    dog.getAngle();
    dog.displayAll();
    

    return 0;
}
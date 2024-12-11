#include <iostream>
using namespace std;

class employee
{
    int salary;
    int hours;

public:
    void getInfo()
    {

        cout << "Enter ur salary : ";
        cin >> salary;
        cout << "How may hours do u work : ";
        cin >> hours;
    }
    int AddSalary()
    {
        if (salary <= 500)
        {
            cout << " salary before : " << salary << " new salary = " << salary + 1000 << endl;
        }
    }
    int addWork()
    {
        if (hours >= 6)
        {
            cout << "New salary = " << salary + 500 << endl;
        }
    }
};

int main()
{
    employee a;
    a.getInfo();
    a.AddSalary();
    a.addWork();

    return 0;
}
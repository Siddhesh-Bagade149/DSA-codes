#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int ele)
    {
        if (top == size - 1)
        {
            // cout<<top;
            cout << "Stack Overflow\n";
        }
        else
        {
            top++;
            arr[top] = ele;
            // cout<<top;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
            cout << "Stack Underflow\n";
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            cout << "empty\n";
            return true;
        }
        else
            return false;
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "empty\n";
        }
        else
            cout<< arr[top]<<endl;;
    }
};
// void Stack::push(int ele){
//     top++;
//     arr[top]=ele;
// }
int main()
{
    Stack stack(4);
    stack.push(1);
     stack.peek();
    stack.push(2);
     stack.peek();
    stack.push(3);
     stack.peek();
    stack.push(4);
    stack.peek();
    stack.isEmpty();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.isEmpty();
    return 0;
}
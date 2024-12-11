#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    void push(Node *&head, int d)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }
    void pop(Node *&head)
    {
        if (head == NULL)
        {
            cout << "stack is already empty\n";
        }
        else
            head = head->next;
    }
    void isEmpty(Node *&head)
    {
        if (head == NULL)
        {
            cout << "stack is empty\n";
        }
        else
            cout << "stack is not empty\n";
    }
    void peek(Node *&head)
    {
        if (head == NULL)
        {
            cout << "stack is empty\n";
        }
        else
            cout << "Top=" << head->data << endl;
    }
};

int main()
{
    Node st(4);
    Node *head=&st;
    st.pop(head);
    st.pop(head);
    return 0;
}
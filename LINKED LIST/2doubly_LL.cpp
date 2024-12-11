#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print(Node *head, Node *tail)
{
    Node *temp = head;
    
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "head= " << head->data<<" tail= " << tail->data<<endl<<endl;
}

void insertAtHead(Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        // tail=temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
    temp->next->prev = nodeToInsert;
}
int main()
{
    // Node *node1 = new Node(5);
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, 0);
    print(head,tail);
    insertAtHead(head, -5);
    print(head, tail);
    insertAtHead(head, -10);
    print(head, tail);
    insertAtTail(tail, 10);
    print(head, tail);
    // insertAtPosition(head, 1, 7);
    // print(head);

    return 0;
}
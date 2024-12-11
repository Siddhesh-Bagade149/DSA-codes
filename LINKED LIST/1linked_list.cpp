#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor to creat a new node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory freed for data: " << val << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp; // tail=tail->next;
}

void insertAtPosition(Node *head, int position, int d)
{
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
}

void printList(Node *head)
{
    // Node *temp = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void deleteNode(int pos, Node *&head)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        int cnt = 1;
        Node *curr = head;
        Node *prev = NULL;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{

    Node *node1 = new Node(5);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 12);
    insertAtHead(head, 5);
    insertAtTail(tail, 69);
    insertAtTail(tail, 45);
    insertAtPosition(head, 3, 55);
    printList(head);
    deleteNode(3, head);
    printList(head);
    return 0;
}
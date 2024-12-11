#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *makeBST(Node *&root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (data < root->data)
    {
        root->left = makeBST(root->left, data);
    }
    else
    {
        root->right = makeBST(root->right, data);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = makeBST(root, data);
        cin >> data;
    }
}
void levOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        { // a level is complete
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
Node *minVal(Node *root)
{
    Node *temp = root;
    while (temp->left)
    {
        temp=temp->left;
    }
    return temp;
}
Node *deleteFromBST(Node *root, int x)
{
    if (!root)
        return root;
    if (root->data == x)
    {
        // 0 child
        if (!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        // 1child

        // left not right
        if (root->left && !root->right)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // right not left
        if (!root->left && root->right)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2chlidren
        if(root->left && root->right){
            //find min node from right ,make root->val=that node then delete that node
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
        }
    }
    else if (x > root->data)
    {
        root->right = deleteFromBST(root->right, x);
        return root;
    }
    else
    {
        root->left = deleteFromBST(root->left, x);
        return root;
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter data for BST\n";
    takeInput(root);
    levOrder(root);
    deleteFromBST(root,50);
    levOrder(root);
    return 0;
}
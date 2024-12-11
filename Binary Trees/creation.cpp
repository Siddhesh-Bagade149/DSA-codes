#include "iostream"
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    };
};
node *buildTree(node *root)
{
    cout << "enter data : ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;
    cout << "Enter data in left of:" << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data in right of:" << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void levOrder(node *root)
/*for (int i = 0; i < levelSize; i++) {
            TreeNode* temp = q.front();
            q.pop();
            maxi = max(maxi, temp->val);

            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    */
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
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

void inOrder(node *root)
{ // LNR
    //base case = if temp/root == NULL return
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node *root){ // RLR
    node*temp=root;
    cout<<temp->data<<" ";
    if(temp->left){
        preOrder(temp->left);
    }
    if(temp->right){
        preOrder(temp->right);
    }
}
void postorder(node*root){//LRroot
    node*temp=root;
    if(temp->left){
        postorder(temp->left);
    }
    if(temp->right){
        postorder(temp->right);
    }
    cout<<temp->data<<" ";
}

void buildLevelOrder(node*&root){
    queue<node*>q;
    int data;
    cout<<"enter root data:";cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        cout<<"enter data for left of "<<temp->data<<": ";
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        
        int rightData;
        cout<<"enter data for right of "<<temp->data<<": ";
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }

    }
}
int main()
{

    node *root = NULL;
    buildLevelOrder(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1
    // cout << "level ordrer traveresal\n";
    levOrder(root);
    // inOrder(root);
    // preOrder(root);
    // postorder(root);
    return 0;
}
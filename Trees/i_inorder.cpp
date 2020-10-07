#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *right;
    node *left;
};
node* newNode(int data)
{
    node *Node=new node();
    Node->data=data;
    Node->right=NULL;
    Node->left=NULL;
}

void inorder(node *root)
{
    stack <node*> S;
    if(root==NULL) return;

    node  *curr=root;
    while(curr!=NULL||S.empty()==false)
    {
        while(curr!=NULL)
        {
            S.push(curr);
            curr=curr->left;
        }
        curr=S.top();
        S.pop();
        cout<<curr->data<<" ";

        curr=curr->right;

    }
}
int main()
{
    node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    inorder(root);
}
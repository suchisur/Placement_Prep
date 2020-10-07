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

void preorder(node *root)
{
    stack <node*> S;
    S.push(root);
    while(S.empty()==false)
    {
        node *temp=S.top();
        cout<<temp->data<<" ";
        S.pop();
        if(temp->right)
        S.push(temp->right);
        if(temp->left)
        S.push(temp->left);
    }
}
int main()
{
    node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    preorder(root);
}
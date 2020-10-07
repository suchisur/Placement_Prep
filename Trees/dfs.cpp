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
    return Node;
}

void dfs(node *root)
{
    if(root==NULL) return;
    
    cout<<root->data<<" ";
    dfs(root->left);
    dfs(root->right);
}
int main()
{
    node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    dfs(root);
}
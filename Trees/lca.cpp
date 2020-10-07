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

node* lca(node *root,int n1,int n2)
{
     if (root == NULL) return NULL; 
   if(root->data>n1 && root->data>n2)
        return lca(root->left,n1,n2);


    if(root->data<n1&&root->data<n2) return lca(root->right,n1,n2);


    
    return root;
   

    
}
int main()
{
    node *root=newNode(7);
    root->left=newNode(6);
    root->right=newNode(8);
    root->left->left=newNode(3);
    root->left->right=newNode(5);
    node *ans=lca(root,3,5);
    cout<<ans->data<<" ";
}